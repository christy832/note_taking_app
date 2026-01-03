package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View

import android.os.Bundle
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Adapters.DeletedNoteAdapter
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.NoteApplication
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ViewModel.NoteViewModel
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ViewModel.NoteViewModelFactory

class RecentlyDeletedActivity : AppCompatActivity() {

    private lateinit var noteViewModel: NoteViewModel
    private lateinit var deletedAdapter: DeletedNoteAdapter

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_recently_deleted)

        supportActionBar?.title = "Recently Deleted"

        val recyclerView: RecyclerView = findViewById(R.id.recyclerViewDeleted)
        recyclerView.layoutManager = LinearLayoutManager(this)

        // 🔹 pass callbacks for restore / delete forever
        deletedAdapter = DeletedNoteAdapter(
            onRestoreClick = { note ->
                val id = note.id
                if (id == null) {
                    Toast.makeText(this, "Cannot restore: id is null", Toast.LENGTH_SHORT).show()
                    return@DeletedNoteAdapter
                }
                noteViewModel.restoreNote(id)
                Toast.makeText(this, "Note restored", Toast.LENGTH_SHORT).show()
            },
            onDeleteForeverClick = { note ->
                val id = note.id
                if (id == null) {
                    Toast.makeText(this, "Cannot delete: id is null", Toast.LENGTH_SHORT).show()
                    return@DeletedNoteAdapter
                }
                noteViewModel.deleteNoteForever(id)
                Toast.makeText(this, "Note deleted permanently", Toast.LENGTH_SHORT).show()
            }
        )
        recyclerView.adapter = deletedAdapter

        val viewModelFactory =
            NoteViewModelFactory((application as NoteApplication).repository)

        noteViewModel = ViewModelProvider(this, viewModelFactory)
            .get(NoteViewModel::class.java)

        // observe deleted notes
        noteViewModel.deletedNotes.observe(this) { notes ->
            deletedAdapter.submitList(notes)
        }

        // load deleted notes when screen opens
        noteViewModel.loadDeletedNotes()
    }
}
