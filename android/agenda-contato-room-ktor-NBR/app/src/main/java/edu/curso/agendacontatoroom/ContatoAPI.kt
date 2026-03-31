package edu.curso.agendacontatoroom

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.request.delete
import io.ktor.client.request.get
import io.ktor.client.request.post
import io.ktor.client.request.setBody
import io.ktor.http.ContentType
import io.ktor.http.contentType

class ContatoAPI (private val httpClient : HttpClient) {
    private val URL_BASE = "https://twotdsph-backend.onrender.com"
    suspend fun getAll() : List<Contato> {
        return httpClient.get("$URL_BASE/contato").body()
    }
    suspend fun remove(contato : Contato)  {
        httpClient.delete("$URL_BASE/contato/${contato.id}")
    }
    suspend fun create(contato : Contato) {
        httpClient.post( "$URL_BASE/contato" ) {
            contentType(ContentType.Application.Json)
            setBody(contato)
        }
    }
}
