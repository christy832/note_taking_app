package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Room


import androidx.room.Dao
import androidx.room.Delete
import androidx.room.Insert
import androidx.room.Query
import androidx.room.Update
import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model.Note


import kotlinx.coroutines.flow.Flow

@Dao
interface NoteDAO {
    @Insert
    suspend fun insert(note: Note )
    @Update
    suspend fun  update (note :Note)

    @Delete
    suspend fun delete (note :Note)

    @Query( "SELECT * FROM note_table ORDER BY id ASC")
    fun getAllNotes(): Flow<List<Note>>                          // TAKES ALL Data and list them from small to large


    @Query("DELETE FROM note_table")
    suspend fun deleteAllNotes()
}