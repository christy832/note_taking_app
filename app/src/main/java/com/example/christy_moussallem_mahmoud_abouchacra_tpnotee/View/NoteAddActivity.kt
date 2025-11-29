package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View

import android.content.Intent
import android.os.Bundle
import android.os.ParcelFileDescriptor
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.activity.enableEdgeToEdge

import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.DialogTitle
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R

class NoteAddActivity : AppCompatActivity() {
    lateinit var editTextTitle: EditText
    lateinit var editTextDescription: EditText
    lateinit var buttonCancel: Button
    lateinit var buttonSave : Button
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContentView(R.layout.activity_note_add)

        supportActionBar?.title= "Add Note"
        editTextTitle= findViewById(R.id.editTextNoteTitle)
        editTextDescription=findViewById(R.id.editTextNoteDescription)
        buttonCancel=findViewById(R.id.buttonCancel)
        buttonSave=findViewById(R.id.buttonSave)

        buttonCancel.setOnClickListener{
        Toast.makeText(applicationContext , " Nothing saved", Toast.LENGTH_SHORT).show()
            finish()
        }

        buttonSave.setOnClickListener {
        saveNote()
        }

        ViewCompat.setOnApplyWindowInsetsListener(findViewById(R.id.main)) { v, insets ->
            val systemBars = insets.getInsets(WindowInsetsCompat.Type.systemBars())
            v.setPadding(systemBars.left, systemBars.top, systemBars.right, systemBars.bottom)
            insets
        }
    }

    fun saveNote(){
     val noteTitle: String= editTextTitle.text.toString()
        val noteDescription : String =editTextDescription.text.toString()

        val intent = Intent()
        intent.putExtra("Title", noteTitle)
        intent.putExtra("Description", noteDescription)
        setResult(RESULT_OK, intent)
        finish()
    }
}