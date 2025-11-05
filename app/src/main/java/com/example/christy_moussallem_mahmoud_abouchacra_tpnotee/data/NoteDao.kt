package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.data

import androidx.room.Dao
import androidx.room.Insert
import androidx.room.Query
import androidx.room.Delete

import kotlinx.coroutines.flow.Flow


@Dao
interface NoteDao{
    @Query("SELECT * From Note Order By id DESC ")
    fun getAll(): Flow<List<Note>>

    @Insert
    suspend fun insert(note:Note)
    @Delete
    suspend fun delete(note:Note)
    @Query ("UPDATE Note Set text= :text WHERE id= :id")
    suspend fun updateText(id:Int, text:String)
}
