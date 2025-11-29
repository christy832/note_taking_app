package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee



import android.app.Application
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Repository.NoteRepository
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Room.NoteDatabase
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.SupervisorJob

class NoteApplication : Application() {

    val applicationScope = CoroutineScope(SupervisorJob())
    val database by lazy{NoteDatabase.getDatabase(this,applicationScope)} //by lazy an instance of db is created when needed we access the NoteDatabase
    val repository by lazy{ NoteRepository(database.getNoteDao()) }




}