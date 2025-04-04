package edu.curso.agendacontato

import android.util.Log
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.engine.android.Android
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.plugins.logging.LogLevel
import io.ktor.client.plugins.logging.Logger
import io.ktor.client.plugins.logging.Logging
import io.ktor.client.request.get
import io.ktor.client.request.post
import io.ktor.client.request.setBody
import io.ktor.client.statement.HttpResponse
import io.ktor.http.ContentType
import io.ktor.http.contentType
import io.ktor.serialization.kotlinx.json.json
import kotlinx.coroutines.launch
import kotlinx.serialization.json.Json

class ContatoViewModel : ViewModel() {
    class CustomHttpLogger(): Logger {
        override fun log(message: String) {
            Log.d("LITTLE-LEMON", message) // Or whatever logging system you want here
        }
    }
    private val client = HttpClient(Android) {
        install(ContentNegotiation) {
            json(Json {
                prettyPrint = true
                isLenient = true
            })
        }

        install(Logging) {
            logger = CustomHttpLogger()
            level = LogLevel.ALL
        }
    }

    val lista = mutableListOf<Contato>()
    var nome = mutableStateOf("")
    var email= mutableStateOf("")
    var telefone = mutableStateOf("")

    fun procurar () {
        viewModelScope.launch {
            val contatos: Map<String, Contato> =
                client.get("https://esoa-10ec8-default-rtdb.firebaseio.com/contatos.json").body()
            lista.clear()
            for (entry in contatos) {
                val contato = entry.value
                lista.add(contato)
                if (contato.nome.contains( nome.value )) {
                    nome.value = contato.nome
                    telefone.value = contato.telefone
                    email.value = contato.email
                }
                Log.i("AGENDA_CONTATO", "Contato: $contato")
            }
        }
    }


    fun adicionar() {
        val contato = Contato(nome.value, telefone.value, email.value)
        lista.add( contato )
        viewModelScope.launch {
            val response: HttpResponse = client.post("https://esoa-10ec8-default-rtdb.firebaseio.com/contatos.json") {
                contentType(ContentType.Application.Json)
                setBody(contato)
            }
        }
        Log.i("AGENDA_CONTATO", "Lista: $lista")
    }
}