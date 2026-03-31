package edu.curso.agendacontatoroom

import androidx.room.Database
import androidx.room.RoomDatabase

@Database(entities = [Contato::class], version = 1)
abstract class ContatoDatabase() : RoomDatabase() {
    abstract fun contatoDao() : ContatoDAO

}