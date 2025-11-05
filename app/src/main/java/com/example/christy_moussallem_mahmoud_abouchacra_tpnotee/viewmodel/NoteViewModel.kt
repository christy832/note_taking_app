package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.viewmodel



import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.data.Note
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.data.NoteRepository
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.stateIn
import kotlinx.coroutines.launch

class NoteViewModel( private val repo: NoteRepository): ViewModel(){
    val notes=repo.notes.stateIn(
        scope=viewModelScope,
        started=SharingStarted.Lazily,
        initialValue= emptyList()
    )

    fun add(text:String)=viewModelScope.launch { repo.add(text) }
    fun delete(note: Note)=viewModelScope.launch { repo.delete(note) }
    fun update(id:Int, text:String)=viewModelScope.launch { repo.update(id,text) }


}

