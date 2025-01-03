package edu.curso.approomdb1.viewmodel

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import edu.curso.approomdb1.db.AgendaDatabase
import edu.curso.approomdb1.db.Contato
import edu.curso.approomdb1.db.ContatoDAO
import kotlinx.coroutines.launch

class ContatoViewModel : ViewModel(){
    private var contatoDao : ContatoDAO? = null
    var nome by mutableStateOf("")
    var email by mutableStateOf("")
    var telefone by mutableStateOf("")



    fun gravar() {
        viewModelScope.launch {
            val c1 = Contato(nome = nome, email = email, telefone = telefone)
            if (contatoDao != null) {
                contatoDao.insert( c1 )
            }
        }

    }

    fun populate(contatoDao: ContatoDAO) {
        contatoDao = contatoDao
    }

}
