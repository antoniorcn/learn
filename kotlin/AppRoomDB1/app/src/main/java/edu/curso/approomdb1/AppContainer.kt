package edu.curso.approomdb1

import android.content.Context
import edu.curso.approomdb1.db.AgendaDatabase
import edu.curso.approomdb1.db.ContatoRepository

class AppContainer(private val context : Context) {

    val repository by lazy {
        ContatoRepository(
            AgendaDatabase.getInstance(context.applicationContext).contatoDAO()
        )
    }

}
