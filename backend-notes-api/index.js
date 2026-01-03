const express = require('express');
const { Pool } = require('pg');
const cors = require('cors');

const app = express();
const port = 8080;

app.use(cors());
app.use(express.json());

const pool = new Pool({
  user: 'postgres',
  host: 'localhost',
  database: 'notesdb',
  password: '123456abcd',
  port: 5432,
});

// test route
app.get('/', (req, res) => {
  res.send('Notes API is running');
});

// get all ACTIVE notes (not deleted)
app.get('/notes', async (req, res) => {
  try {
    const result = await pool.query(
      `SELECT id, title, description
       FROM notes
       WHERE is_deleted = FALSE
       ORDER BY id ASC`
    );
    res.json(result.rows);
  } catch (err) {
    console.error('Error getting notes', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

// ✅ GET recently deleted notes – MUST be before /notes/:id
app.get('/notes/deleted', async (req, res) => {
  try {
    const result = await pool.query(
      `SELECT id, title, description, deleted_at
       FROM notes
       WHERE is_deleted = TRUE
       ORDER BY deleted_at DESC`
    );
    res.json(result.rows);
  } catch (err) {
    console.error('Error getting deleted notes', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

// get one note by id
app.get('/notes/:id', async (req, res) => {
  const id = parseInt(req.params.id, 10);

  try {
    const result = await pool.query(
      'SELECT id, title, description FROM notes WHERE id = $1',
      [id]
    );

    if (result.rows.length === 0) {
      return res.status(404).json({ error: 'Note not found' });
    }

    res.json(result.rows[0]);
  } catch (err) {
    console.error('Error getting note', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

// add note
app.post('/notes', async (req, res) => {
  const { title, description } = req.body;

  try {
    const result = await pool.query(
      'INSERT INTO notes (title, description) VALUES ($1, $2) RETURNING *',
      [title, description]
    );
    res.status(201).json(result.rows[0]);
  } catch (err) {
    console.error('Error adding note', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

// update note
app.put('/notes/:id', async (req, res) => {
  const id = parseInt(req.params.id, 10);
  const { title, description } = req.body;

  try {
    const result = await pool.query(
      'UPDATE notes SET title = $1, description = $2 WHERE id = $3 RETURNING *',
      [title, description, id]
    );

    if (result.rows.length === 0) {
      return res.status(404).json({ error: 'Note not found' });
    }

    res.json(result.rows[0]);
  } catch (err) {
    console.error('Error updating note', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

// soft delete note
app.delete('/notes/:id', async (req, res) => {
  const id = parseInt(req.params.id, 10);

  try {
    await pool.query(
      'UPDATE notes SET is_deleted = TRUE, deleted_at = NOW() WHERE id = $1',
      [id]
    );
    res.json({ success: true });
  } catch (err) {
    console.error('Error soft-deleting note', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

/**
 * RESTORE a deleted note
 * POST /notes/:id/restore
 */
app.post('/notes/:id/restore', async (req, res) => {
  const id = parseInt(req.params.id, 10);

  try {
    const result = await pool.query(
      `UPDATE notes
       SET is_deleted = FALSE,
           deleted_at = NULL
       WHERE id = $1
       RETURNING id, title, description, is_deleted, deleted_at`,
      [id]
    );

    if (result.rows.length === 0) {
      return res.status(404).json({ error: 'Note not found' });
    }

    res.json(result.rows[0]);
  } catch (err) {
    console.error('Error restoring note', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

/**
 * PERMANENTLY delete a note
 * DELETE /notes/:id/force
 */
app.delete('/notes/:id/force', async (req, res) => {
  const id = parseInt(req.params.id, 10);

  try {
    const result = await pool.query(
      'DELETE FROM notes WHERE id = $1 RETURNING id',
      [id]
    );

    if (result.rows.length === 0) {
      return res.status(404).json({ error: 'Note not found' });
    }

    res.json({ success: true });
  } catch (err) {
    console.error('Error hard-deleting note', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});


app.listen(port, () => {
  console.log(`Server listening at http://localhost:${port}`);
});
