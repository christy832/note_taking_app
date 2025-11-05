package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.data


import androidx.room.Entity
import androidx.room.PrimaryKey
@Entity
data class Note(
    @PrimaryKey(autoGenerate =true) val id: Int=0,
val text: String

)