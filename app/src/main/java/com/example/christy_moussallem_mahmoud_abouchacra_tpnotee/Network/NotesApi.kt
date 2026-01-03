package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.network

import com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model.Note
import retrofit2.http.Body
import retrofit2.http.DELETE
import retrofit2.http.GET
import retrofit2.http.PATCH
import retrofit2.http.POST
import retrofit2.http.PUT
import retrofit2.http.Path

interface NotesApi {

    @GET("notes")
    suspend fun getNotes(): List<Note>

    @GET("notes/deleted")
    suspend fun getDeletedNotes(): List<Note>

    @GET("notes/{id}")
    suspend fun getNote(@Path("id") id: Int): Note

    @POST("notes")
    suspend fun addNote(@Body note: Note): Note

    @PUT("notes/{id}")
    suspend fun updateNote(
        @Path("id") id: Int,
        @Body note: Note
    ): Note

    // soft delete (move to trash)
    @DELETE("notes/{id}")
    suspend fun deleteNote(@Path("id") id: Int)

    // restore from trash
    @PATCH("notes/{id}/restore")
    suspend fun restoreNote(@Path("id") id: Int): Note

    // delete forever
    @DELETE("notes/{id}/force")
    suspend fun deleteNoteForever(@Path("id") id: Int)
}
