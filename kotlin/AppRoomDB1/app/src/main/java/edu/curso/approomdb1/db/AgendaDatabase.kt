package edu.curso.approomdb1.db

import android.content.Context
import androidx.room.Database
import androidx.room.Room
import androidx.room.RoomDatabase

@Database(entities = [Contato::class], version=1)
abstract class AgendaDatabase : RoomDatabase() {

    abstract fun contatoDAO() : ContatoDAO

    companion object {
        @Volatile
        private var _instancia : AgendaDatabase? = null

        fun getInstance( contexto : Context) : AgendaDatabase {
            synchronized(this) {
                return _instancia ?:
                Room
                .databaseBuilder(
                    contexto.applicationContext,
                    AgendaDatabase::class.java,
                    "agenda-database"
                )
                .fallbackToDestructiveMigration()
                .build()
                .also {
                    _instancia = it
                }
            }
        }
    }
}