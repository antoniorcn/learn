package edu.curso.approomdb1.db

import androidx.room.ColumnInfo
import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity(tableName = "contatos")
data class Contato(
    @PrimaryKey(autoGenerate = true)
    @ColumnInfo(name = "id")
    var id : Long = 0L,

    @ColumnInfo(name = "nome")
    var nome : String = "",

    @ColumnInfo(name = "email")
    var email : String = "",

    @ColumnInfo(name = "telefone")
    var telefone : String = ""
    ) {
}