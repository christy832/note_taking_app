package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View

import android.content.DialogInterface
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.widget.Toast
import androidx.activity.result.ActivityResultCallback
import androidx.activity.result.ActivityResultLauncher
import androidx.activity.result.contract.ActivityResultContracts
import androidx.appcompat.app.AlertDialog
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProvider
import androidx.recyclerview.widget.ItemTouchHelper
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Adapters.NoteAdapter
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model.Note
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ViewModel.NoteViewModel
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ViewModel.NoteViewModelFactory
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.NoteApplication

class MainActivity : AppCompatActivity() {

    private lateinit var noteViewModel: NoteViewModel
    lateinit var updateActivityResultLauncher: ActivityResultLauncher<Intent>
    lateinit var addActivityResultLauncher: ActivityResultLauncher<Intent>

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val recyclerView: RecyclerView = findViewById(R.id.recyclerView)
        recyclerView.layoutManager = LinearLayoutManager(this)
        val noteAdapter = NoteAdapter(this)
        recyclerView.adapter = noteAdapter


        registerActivityResultLauncher()

        val viewModelFactory =
            NoteViewModelFactory((application as NoteApplication).repository)

        noteViewModel = ViewModelProvider(this, viewModelFactory)
            .get(NoteViewModel::class.java)

        noteViewModel.myAllNotes.observe(this, Observer { notes ->
            noteAdapter.setNote(notes)
        })

        // swipe left/right to delete
        ItemTouchHelper(object : ItemTouchHelper.SimpleCallback(
            0,
            ItemTouchHelper.LEFT or ItemTouchHelper.RIGHT
        ) {
            override fun onMove(
                recyclerView: RecyclerView,
                viewHolder: RecyclerView.ViewHolder,
                target: RecyclerView.ViewHolder
            ): Boolean {
                return false
            }

            override fun onSwiped(viewHolder: RecyclerView.ViewHolder, direction: Int) {
                val note = noteAdapter.getNote(viewHolder.adapterPosition)
                noteViewModel.delete(note)

                Toast.makeText(this@MainActivity, "Note deleted", Toast.LENGTH_SHORT).show()
            }

        }).attachToRecyclerView(recyclerView)
    }

    fun registerActivityResultLauncher() {
        // launcher for Add Note
        addActivityResultLauncher = registerForActivityResult(
            ActivityResultContracts.StartActivityForResult(),
            ActivityResultCallback { resultAddNote ->
                val resultCode = resultAddNote.resultCode
                val data = resultAddNote.data
                if (resultCode == RESULT_OK && data != null) {
                    val noteTitle: String = data.getStringExtra("Title").toString()
                    val noteDescription: String = data.getStringExtra("Description").toString()

                    val note = Note(
                        title = noteTitle,
                        description = noteDescription
                    )

                    noteViewModel.insert(note)
                }
            })

        // launcher for Update Note
        updateActivityResultLauncher = registerForActivityResult(
            ActivityResultContracts.StartActivityForResult(),
            ActivityResultCallback { resultUpdateNote ->
                val resultCode = resultUpdateNote.resultCode
                val data = resultUpdateNote.data
                if (resultCode == RESULT_OK && data != null) {
                    val updatedTitle: String =
                        data.getStringExtra("updatedTitle").toString()
                    val updatedDescription: String =
                        data.getStringExtra("updatedDescription").toString()
                    val noteId = data.getIntExtra("noteId", -1)

                    if (noteId != -1) {
                        val newNote = Note(
                            id = noteId,
                            title = updatedTitle,
                            description = updatedDescription
                        )
                        noteViewModel.update(newNote)
                    }
                }
            })
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.new_menu, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        when (item.itemId) {
            R.id.item_add_note -> {
                val intent = Intent(this, NoteAddActivity::class.java)
                addActivityResultLauncher.launch(intent)
            }

            R.id.item_delete_all_notes -> showDialogMessage()

            R.id.item_recently_deleted -> {
                val intent = Intent(this, RecentlyDeletedActivity::class.java)
                startActivity(intent)
            }
        }
        return true
    }


    fun showDialogMessage() {
        val dialogMessage = AlertDialog.Builder(this)
        dialogMessage.setTitle("Delete All Notes")
        dialogMessage.setMessage(
            "If you click Yes, all notes will be deleted. " +
                    "If you want to delete a specific note, please swipe left or right."
        )

        dialogMessage.setNegativeButton(
            "No",
            DialogInterface.OnClickListener { dialog, _ ->
                dialog.cancel()
            })

        dialogMessage.setPositiveButton(
            "Yes",
            DialogInterface.OnClickListener { _, _ ->
                noteViewModel.deleteAllNotes()
            })

        dialogMessage.create().show()
    }
}
