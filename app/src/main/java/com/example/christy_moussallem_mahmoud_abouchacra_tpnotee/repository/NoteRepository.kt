package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.data



class NoteRepository (private val dao: NoteDao){


val notes=dao.getAll()
suspend fun add(text: String)=dao.insert(Note(text= text))
suspend fun delete(note:Note) = dao.delete(note)
suspend fun update(id: Int , text:String )= dao.updateText(id,text)
}