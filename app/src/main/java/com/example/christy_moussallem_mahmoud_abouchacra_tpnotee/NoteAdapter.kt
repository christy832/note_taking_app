package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee

import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.data.Note


class NoteAdapter (
    private var notes: List<Note>,
    private val onClick :(Note)-> Unit)



