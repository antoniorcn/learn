package edu.curso.agendacontatoroom

import androidx.room.Entity
import androidx.room.PrimaryKey
import kotlinx.serialization.Serializable

@Serializable
@Entity(tableName = "Contato")
data class Contato (
    @PrimaryKey(autoGenerate = true)
    val id : Long = 0,
    val nome : String,
    val email : String,
    val telefone : String
)