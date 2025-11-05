package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.viewmodel

import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.data.NoteRepository

class NoteViewModelFactory(private val repo :NoteRepository): ViewModelProvider.Factory{
    override fun <T: ViewModel> create(modelClass: Class<T>): T{
        require(modelClass.isAssignableFrom(NoteViewModel:: class.java))
        @Suppress("UNCHECKED_CAST")
        return NoteViewModel(repo) as T
    }
}