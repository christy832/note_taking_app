package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.View

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProvider
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.R
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ViewModel.NoteViewModel
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ViewModel.NoteViewModelFactory
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.NoteApplication

class MainActivity : AppCompatActivity() {

    private lateinit var noteViewModel: NoteViewModel

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val viewModelFactory =
            NoteViewModelFactory((application as NoteApplication).repository)

        noteViewModel = ViewModelProvider(this, viewModelFactory)
            .get(NoteViewModel::class.java)

        noteViewModel.myAllNotes.observe(this, Observer { notes ->

        })
    }
}
