package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View

import android.app.Instrumentation
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.Menu
import android.view.MenuItem
import android.widget.Toast
import androidx.activity.result.ActivityResultCallback
import androidx.activity.result.ActivityResultLauncher
import androidx.activity.result.contract.ActivityResultContracts
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
     lateinit var addActivityResultLauncher: ActivityResultLauncher<Intent>
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val recyclerView: RecyclerView = findViewById(R.id.recyclerView)
        recyclerView.layoutManager = LinearLayoutManager(this)
        val noteAdapter = NoteAdapter()
        recyclerView.adapter = noteAdapter


        registerActivityResultLauncher() // for results

        val viewModelFactory =
            NoteViewModelFactory((application as NoteApplication).repository)

        noteViewModel = ViewModelProvider(this, viewModelFactory)
            .get(NoteViewModel::class.java)

        noteViewModel.myAllNotes.observe(this, Observer { notes ->


            noteAdapter.setNote(notes)
        })


        //touch item for deleting a note by swiping left or right
        ItemTouchHelper(object : ItemTouchHelper.SimpleCallback(0,
            ItemTouchHelper.LEFT or ItemTouchHelper.RIGHT){
            override  fun onMove(
                recyclerView: RecyclerView,
                viewHolder: RecyclerView.ViewHolder,
                target: RecyclerView.ViewHolder
            ): Boolean{
            TODO()
            }
            override fun onSwiped(viewHolder: RecyclerView.ViewHolder, direction :Int)
            {
                val note = noteAdapter.getNote(viewHolder.adapterPosition)
                noteViewModel.delete(note)

                Toast.makeText(this@MainActivity, "Note deleted", Toast.LENGTH_SHORT).show()
            }

        }).attachToRecyclerView(recyclerView)
    }
    fun registerActivityResultLauncher(){
 addActivityResultLauncher = registerForActivityResult(ActivityResultContracts.StartActivityForResult()
 , ActivityResultCallback{
     resultAddNote->
val resultCode = resultAddNote.resultCode
         val data = resultAddNote.data
         if (resultCode ==RESULT_OK && data!= null){
             val noteTitle : String = data.getStringExtra("Title").toString()
             val noteDescription : String =data.getStringExtra("Description").toString()
             val note = Note(noteTitle, noteDescription)
             noteViewModel.insert(note)
         }

     })
    }

    override fun onCreateOptionsMenu(menu: Menu?): Boolean {
        menuInflater.inflate(R.menu.new_menu, menu)
        return true
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        when(item.itemId){
            R.id.item_add_note ->{
                val intent= Intent(this, NoteAddActivity::class.java)
                addActivityResultLauncher.launch(intent)
            }
            R.id.item_delete_all_notes-> Toast.makeText(applicationContext
            ,"Delete icon was clicked ", Toast.LENGTH_SHORT).show()
        }
        return true
    }
}

