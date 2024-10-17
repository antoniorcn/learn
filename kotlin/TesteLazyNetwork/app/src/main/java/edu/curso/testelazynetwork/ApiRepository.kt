package edu.curso.testelazynetwork

import android.util.Log
import com.google.gson.Gson
import com.google.gson.reflect.TypeToken
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext
import okhttp3.OkHttpClient
import okhttp3.Request
import java.io.IOException


class ApiRepository {

    private val URL_BASE = "https://totem-8c64a-default-rtdb.firebaseio.com"
    private val httpClient = OkHttpClient()
    private val gson = Gson()

    suspend fun getCategoriasFromBackend() : ArrayList<Categoria> {
        return withContext(Dispatchers.IO) {
            val listaCategorias = ArrayList<Categoria>()
            val caminho = "$URL_BASE/categorias.json"
            Log.d("TOTEM", "Fazendo requisição para a acessar $caminho")
            val request = Request.Builder()
                .url(caminho)
                .get()
                .build()
            val response = httpClient.newCall(request).execute()
            if (! response.isSuccessful) {
                Log.e("TOTEM", "Erro ao carregar as categorias")
                throw IOException("Erro ao carregar as categorias")
            }
            val categoriasJson = response.body?.string()
            if (categoriasJson == null || categoriasJson == "null") {
                Log.i("TOTEM", "Sucesso ao carregar as Categorias")
            } else {
                Log.i("TOTEM", "Convertendo as categorias para uma lista")
                val categoriasType = object : TypeToken<HashMap<String?, Categoria?>>() {}.type
                val mapCategorias : HashMap<String?, Categoria?> =
                    gson.fromJson(categoriasJson, categoriasType)
                listaCategorias.clear()
                for (item in mapCategorias) {
                    if (item.value != null) {
                        listaCategorias.add(item.value!!)
                    }
                }
            }
            listaCategorias
        }
    }
}