package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Repository

import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model.Note
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.network.ApiClient
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.network.NotesApi
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow

class NoteRepository(
    private val api: NotesApi = ApiClient.api
) {
    // active notes (not deleted)
    val myAllNotes: Flow<List<Note>> = flow {
        val notes = api.getNotes()
        emit(notes)
    }

    // deleted notes (trash)
    suspend fun getDeletedNotes(): List<Note> {
        return api.getDeletedNotes()
    }

    suspend fun insert(note: Note) {
        api.addNote(note)
    }

    suspend fun update(note: Note) {
        val id = note.id ?: error("Note id is null")
        api.updateNote(id, note)
    }

    suspend fun delete(note: Note) {
        val id = note.id ?: error("Note id is null")
        api.deleteNote(id)          // this calls DELETE /notes/{id} → soft delete in backend
    }

    suspend fun deleteAllNotes() {
        val allNotes = api.getNotes()
        for (n in allNotes) {
            n.id?.let { api.deleteNote(it) }
        }
    }

    suspend fun restoreNote(id: Int) {
        api.restoreNote(id)
    }

    suspend fun deleteNoteForever(id: Int) {
        api.deleteNoteForever(id)
    }
}
