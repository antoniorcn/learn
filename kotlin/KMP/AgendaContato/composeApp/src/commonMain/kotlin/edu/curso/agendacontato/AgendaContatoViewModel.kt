package edu.curso.agendacontato

import androidx.compose.runtime.MutableState
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import io.ktor.client.HttpClient
import kotlinx.coroutines.launch

class AgendaContatoViewModel : ViewModel() {

    init {
        println("AgendaContatoViewModel criado...")
    }

    val httpClient = createHttpClient()
    val contatoApi = ContatoApi( httpClient )

    val lista : MutableList<Contato> = mutableListOf()

    val tela : MutableState<String> = mutableStateOf("LISTA")

    val nome = mutableStateOf("")
    val telefone = mutableStateOf("")
    val email = mutableStateOf("")

    fun adicionar() {
        println("Adicionando os dados do contato: ")
        println("Nome: ${nome.value}")
        println("Telefone: ${telefone.value}")
        println("Email: ${email.value}")

        viewModelScope.launch {
            contatoApi.create(Contato(0, nome.value, telefone.value, email.value))
        }
        println("Tamanho da lista ${lista.size}")
        println(lista)

    }

    fun lerTodos() {
        viewModelScope.launch {
            lista.clear()
            lista.addAll( contatoApi.getAll() )
        }
    }

    override fun onCleared() {
        super.onCleared()
        println("AgendaContatoViewModel destruido...")
    }

    fun navigate( novaTela : String ) {
        tela.value = novaTela
    }

}