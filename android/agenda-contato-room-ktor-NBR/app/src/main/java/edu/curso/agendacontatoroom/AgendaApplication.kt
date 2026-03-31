package edu.curso.agendacontatoroom

import android.app.Application
import androidx.room.Room

class AgendaApplication : Application() {

    companion object {
        lateinit var db: ContatoDatabase
    }
    override fun onCreate() {
        super.onCreate()
        db = Room.databaseBuilder(
            applicationContext,
            ContatoDatabase::class.java, "database-agenda"
        ).build()
    }



}