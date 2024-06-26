package edu.curso.agendacrudcomposeretrofit

import android.util.Log
import com.google.gson.Gson
import com.google.gson.reflect.TypeToken
import okhttp3.MediaType
import okhttp3.OkHttpClient
import okhttp3.Request
import okhttp3.RequestBody
import ru.gildor.coroutines.okhttp.await

object WebService {

    private val clientHttp = OkHttpClient.Builder().build()
    private val gson = Gson()
    suspend fun getContatos(): ArrayList<Contato> {
        val url = Constantes.BASE_URL + "/contatos.json"
        Log.i(Constantes.TAG_PRINCIPAL, "getContatos() Web Service invocado")
        Log.i(Constantes.TAG_PRINCIPAL, "Acessando a URL : $url")
        val request = Request.Builder()
            .get()
            .url(url)
            .build()
        val response = clientHttp.newCall(request).await()
        Log.i(Constantes.TAG_PRINCIPAL, "Dados recebidos convertendo")
        val body = response.body()
        val corpoTexto = body!!.string()
        Log.i(Constantes.TAG_PRINCIPAL, "Resultado: $corpoTexto")
        val type = object : TypeToken<HashMap<String?, Contato?>?>() {}.type
        val myMap: HashMap<String, Contato> = gson.fromJson(corpoTexto, type)
        val listaTemp = ArrayList<Contato>()
        myMap.keys.forEach {
            val contato = myMap[it]
            if (contato != null) {
                contato.id = it
                Log.i(Constantes.TAG_PRINCIPAL, "Contato: $contato")
                listaTemp.add(contato)
            }
        }
        return listaTemp
    }

    suspend fun addContato(contato : Contato) {
        val url = Constantes.BASE_URL + "/contatos.json"
        Log.i(Constantes.TAG_PRINCIPAL, "addContato () View Model invocado")
        Log.i(Constantes.TAG_PRINCIPAL, "Acessando a URL : $url")

        val body = RequestBody.create(
            MediaType.parse("application/json"),
            """
                    {
                        "nome": "${contato.nome}",
                        "telefone": "${contato.telefone}",
                        "email": "${contato.email}"
                    }
                """.trimIndent()
        )

        val request = Request.Builder()
            .post(body)
            .url(url)
            .build()

        val result = clientHttp.newCall(request).await()
        Log.i(Constantes.TAG_PRINCIPAL, "Resultado: ${result.body()!!.string()}")
    }

}
