package edu.curso.agendacontatoroom

import androidx.compose.runtime.MutableState
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch

class AgendaContatoViewModel() : ViewModel() {

    val contatoDAO = AgendaApplication.db.contatoDao()

    val nome : MutableState<String> = mutableStateOf("")
    val telefone : MutableState<String> = mutableStateOf("")
    val email : MutableState<String> = mutableStateOf("")

    val lista : MutableState<List<Contato>> = mutableStateOf(listOf())

    init {
        lerTodos()
    }

    fun lerTodos() {
        viewModelScope.launch {
            lista.value = contatoDAO.getAll()
        }
    }

    fun adicionar() {
        val contato = Contato( 0, nome.value, email.value, telefone.value )
        viewModelScope.launch {
            contatoDAO.insert(contato)
            lerTodos()
        }
    }

    fun remover( contato : Contato ) {
        viewModelScope.launch {
            contatoDAO.delete(contato)
            lerTodos()
        }
    }

}