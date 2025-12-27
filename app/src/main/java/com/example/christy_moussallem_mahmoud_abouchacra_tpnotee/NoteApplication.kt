package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee

import android.app.Application
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Repository.NoteRepository

class NoteApplication : Application() {

    val repository: NoteRepository by lazy {
        NoteRepository()
    }
}
