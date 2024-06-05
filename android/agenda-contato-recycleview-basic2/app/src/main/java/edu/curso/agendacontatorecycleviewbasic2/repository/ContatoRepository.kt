package edu.curso.agendacontatorecycleviewbasic2.repository

import android.util.Log
import com.google.gson.Gson
import com.google.gson.reflect.TypeToken
import edu.curso.agendacontatorecycleviewbasic2.model.Contato
import edu.curso.agendacontatorecycleviewbasic2.model.ContatoId
import okhttp3.Call
import okhttp3.Callback
import okhttp3.MediaType
import okhttp3.OkHttpClient
import okhttp3.Request
import okhttp3.RequestBody
import okhttp3.Response
import java.io.IOException
import java.lang.reflect.Type

class ContatoRepository {
    private val gson = Gson()
    private val clientHttp = OkHttpClient()
    fun getContatos(callback : ContatoListaCallbackRepository) {
        val request = Request.Builder()
            .get()
            .url("https://fatec-2024-1s-pdmi-default-rtdb.firebaseio.com/agenda.json")
            .build()
        val response = object : Callback {
            override fun onFailure(call: Call?, e: IOException?) {
                Log.e("AGENDA-CONTATO", e?.message.toString())
                callback.onError(e)
            }

            override fun onResponse(call: Call?, response: Response?) {
                val body = response?.body()
                val type: Type = object : TypeToken<Map<String?, Contato?>?>() {}.type
                val myMap: Map<String, Contato> = gson.fromJson(body?.string(), type)
                Log.i("AGENDA-CONTATO", "ContatoRepository - Map Keys: ${myMap.keys}")
                Log.i("AGENDA-CONTATO", "ContatoRepository - Map Values: ${myMap.values}")
                val lista = ArrayList<Contato>()
                myMap.values.forEach {
                    lista.add(it)
                    Log.i("AGENDA-CONTATO", "ContatoRepository - Contado adicionado a lista: $it")
                }
                callback.onSucesso(lista)
            }
        }
        clientHttp.newCall(request).enqueue(response)
    }

    fun addContato(contato : Contato, callback : ContatoAdicionarCallbackRepository) {
        contato.id = null
        val body = RequestBody.create(
            MediaType.parse("application/json"),
            gson.toJson(contato).toString()
        )
        """
            {
                "nome": "${contato.nome}",
                "telefone": "${contato.telefone}",
                "email": "${contato.email}"
            }
        """.trimIndent()

        val request = Request.Builder()
            .post(body)
            .url("https://fatec-2024-1s-pdmi-default-rtdb.firebaseio.com/agenda.json")
            .build()
        val response = object : Callback {
            override fun onFailure(call: Call?, e: IOException?) {
                Log.e("AGENDA-CONTATO", e?.message.toString())
                callback.onError(e)
            }

            override fun onResponse(call: Call?, response: Response?) {
                val body = response?.body()
                val contatoId: ContatoId = gson.fromJson(body?.string(), ContatoId::class.java)
                callback.onSucesso(contatoId)
            }
        }
        clientHttp.newCall(request).enqueue(response)
    }
}