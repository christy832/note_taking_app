package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Repository


import androidx.annotation.WorkerThread
    import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model.Note
    import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Room.NoteDAO
    import kotlinx.coroutines.flow.Flow


    class NoteRepository (private val noteDao :NoteDAO){
        val myAllNotes : Flow<List<Note>> = noteDao.getAllNotes()
        @WorkerThread
        suspend fun  insert(note:Note){
            noteDao.insert(note)
        }

        @WorkerThread
        suspend fun  update(note:Note){
            noteDao.update(note)
        }

        @WorkerThread
        suspend fun  delete(note:Note){
            noteDao.delete(note)
        }

        @WorkerThread
        suspend fun  deleteAllNotes(){
            noteDao.deleteAllNotes()
        }
    }
