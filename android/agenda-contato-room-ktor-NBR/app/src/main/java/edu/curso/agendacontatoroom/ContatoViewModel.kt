package edu.curso.agendacontatoroom

import androidx.compose.runtime.MutableState
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.stateIn
import kotlinx.coroutines.launch

class ContatoViewModel() : ViewModel() {

    val contatoDAO = AgendaApplication.db.contatoDao()

    val nome : MutableState<String> = mutableStateOf("")
    val telefone : MutableState<String> = mutableStateOf("")
    val email : MutableState<String> = mutableStateOf("")
    val httpClient = createHttpClient()
    val contatoApi = ContatoAPI(httpClient)
    val repository = ContatoRepository(contatoDAO, contatoApi)
    val lista : StateFlow<List<Contato>> = repository
        .getContatos()
        .stateIn(
            scope = viewModelScope,
            started = SharingStarted.WhileSubscribed(5000),
            initialValue = emptyList()
        )

    init {
        lerTodos()
    }

    fun lerTodos() {
        viewModelScope.launch {
            repository.getContatos()
        }
    }

    fun adicionar() {
        val contato = Contato( 0, nome.value, email.value, telefone.value )
        viewModelScope.launch {
            repository.adicionar(contato)
        }
    }

    fun remover( contato : Contato ) {
        viewModelScope.launch {
            repository.apagar(contato)
        }
        lerTodos()
    }

}