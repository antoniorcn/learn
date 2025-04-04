package edu.curso.agendacontato

import io.ktor.client.HttpClient
import io.ktor.client.call.body
import io.ktor.client.request.delete
import io.ktor.client.request.get
import io.ktor.client.request.post
import io.ktor.client.request.setBody
import io.ktor.http.ContentType
import io.ktor.http.contentType
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.catch
import kotlinx.coroutines.flow.flow

class ContatoApi (private val httpClient : HttpClient) {
    private val URL_BASE = "http://localhost:8080"
    suspend fun getAll() : List<Contato> {
        return httpClient.get("$URL_BASE/contato").body()
    }

    fun getAllFlow() : Flow<Response<List<Contato>>> = flow {
        emit(Response.Loading())
        val contatos = httpClient.get("$URL_BASE/contato").body<List<Contato>>()
        emit(Response.Success( contatos ))
    }.catch { error ->
        emit(Response.Error( error ))
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