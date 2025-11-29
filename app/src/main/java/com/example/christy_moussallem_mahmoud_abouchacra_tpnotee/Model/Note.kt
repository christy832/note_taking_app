package com.example.christy_moussallem_mahmoud_abouchacra_tpnotee.Model


import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity(tableName = "note_table") //db that we will save our notes data in
class Note (val title: String, val description: String) {
    @PrimaryKey(autoGenerate = true)
    var id=0
}