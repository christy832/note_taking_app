package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.ViewModel

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import androidx.lifecycle.viewModelScope
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model.Note
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Repository.NoteRepository
import kotlinx.coroutines.flow.collectLatest
import kotlinx.coroutines.launch

class NoteViewModel(private val repository: NoteRepository) : ViewModel() {


    private val _myAllNotes = MutableLiveData<List<Note>>()
    val myAllNotes: LiveData<List<Note>> = _myAllNotes

    init {
        loadNotes()
    }


    fun loadNotes() {
        viewModelScope.launch {
            try {
                repository.myAllNotes.collectLatest { notes ->
                    _myAllNotes.value = notes
                }
            } catch (e: Exception) {

            }
        }
    }

    fun insert(note: Note) = viewModelScope.launch {
        try {
            repository.insert(note)
            loadNotes()
        } catch (e: Exception) {
            e.printStackTrace()
            // later you can expose an error LiveData if you want
        }
    }

    fun update(note: Note) = viewModelScope.launch {
        try {
            repository.update(note)
            loadNotes()
        } catch (e: Exception) {
            e.printStackTrace()
        }
    }

    fun delete(note: Note) = viewModelScope.launch {
        try {
            repository.delete(note)
            loadNotes()
        } catch (e: Exception) {
            e.printStackTrace()
        }
    }

    fun deleteAllNotes() = viewModelScope.launch {
        try {
            repository.deleteAllNotes()
            loadNotes()
        } catch (e: Exception) {
            e.printStackTrace()
        }
    }
}


class NoteViewModelFactory(private var repository: NoteRepository) : ViewModelProvider.Factory {
    override fun <T : ViewModel> create(modelClass: Class<T>): T {
        if (modelClass.isAssignableFrom(NoteViewModel::class.java)) {
            @Suppress("UNCHECKED_CAST")
            return NoteViewModel(repository) as T
        } else {
            throw IllegalArgumentException("unknown View Model")
        }
    }
}
