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

// get all notes
app.get('/notes', async (req, res) => {
  try {
    const result = await pool.query(
      'SELECT id, title, description FROM notes ORDER BY id ASC'
    );
    res.json(result.rows);
  } catch (err) {
    console.error('Error getting notes', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

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
      // no note with that id
      return res.status(404).json({ error: 'Note not found' });
    }

    res.json(result.rows[0]);
  } catch (err) {
    console.error('Error updating note', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

// delete note
app.delete('/notes/:id', async (req, res) => {
  const id = parseInt(req.params.id, 10);

  try {
    await pool.query('DELETE FROM notes WHERE id = $1', [id]);
    res.json({ success: true });
  } catch (err) {
    console.error('Error deleting note', err);
    res.status(500).json({ error: 'Internal server error' });
  }
});

app.listen(port, () => {
  console.log(`Server listening at http://localhost:${port}`);
});
