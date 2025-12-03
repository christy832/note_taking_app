package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View

import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R

class UpdateActivity : AppCompatActivity() {

    lateinit var editTextTitle: EditText
    lateinit var editTextDescription: EditText
    lateinit var buttonCancel: Button
    lateinit var buttonSave : Button



    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.activity_update)
        supportActionBar?.title= "Update Note"

        editTextTitle= findViewById(R.id.editTextNoteTitleUpdate)
        editTextDescription=findViewById(R.id.editTextNoteDescriptionUpdate)
        buttonCancel=findViewById(R.id.buttonCancelUpdate)
        buttonSave=findViewById(R.id.buttonSaveUpdate)

        getAndSetData()

        buttonCancel.setOnClickListener{
            Toast.makeText(applicationContext , " Nothing updated", Toast.LENGTH_SHORT).show()
            finish()
        }

        buttonSave.setOnClickListener {
            updateNote()
        }
        }

    fun updateNote(){

    }
    fun getAndSetData(){
        val currentTitle =intent.getStringExtra("currentTitle")
        val currentDescription= intent.getStringExtra("currentDescription")
        val currentId= intent.getIntExtra("currentId" , - 1)

        editTextTitle.setText(currentTitle)
        editTextTitle.setText(currentDescription)
    }
    }
