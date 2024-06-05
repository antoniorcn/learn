package edu.curso.agenda_contato_recycleview_basic1.activity

import android.os.Bundle
import android.util.Log
import android.view.View
import androidx.appcompat.app.AppCompatActivity
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.google.gson.Gson
import com.google.gson.reflect.TypeToken
import edu.curso.agenda_contato_recycleview_basic1.R
import edu.curso.agenda_contato_recycleview_basic1.model.Contato
import edu.curso.agenda_contato_recycleview_basic1.recycle.ContatoAdapter
import edu.curso.agenda_contato_recycleview_basic1.recycle.ItemClickListener
import okhttp3.Call
import okhttp3.Callback
import okhttp3.OkHttpClient
import okhttp3.Request
import okhttp3.Response
import java.io.IOException
import java.lang.reflect.Type

class ListagemActivity: AppCompatActivity(), ItemClickListener {

    val lista = ArrayList<Contato>()
    val clientHttp = OkHttpClient()
    val gson = Gson();

    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)
        setContentView(R.layout.listagem_layout)

        val rcvContatos = findViewById<RecyclerView>(R.id.rcvContatos)
        val adapter = ContatoAdapter(this, lista)
        rcvContatos.adapter = adapter
        rcvContatos.layoutManager = LinearLayoutManager(this)
        adapter.setClickListener(this)
    }

    override fun onStart() {
        super.onStart()
        val jsonString = """
            {
                "-NyVYx2BjSlu7piNDOuB": {
                    "email": "joao@teste.com",
                    "nome": "Joao Silva",
                    "telefone": "111111111"
                }
            }
        """
        val type: Type = object : TypeToken<Map<String?, Contato?>?>() {}.type
        val myMap: Map<String, Contato> = gson.fromJson(jsonString, type)
        Log.i("AGENDA-CONTATO", "Map Keys: ${myMap.keys}")
        Log.i("AGENDA-CONTATO", "Map Values: ${myMap.values}")
        myMap.values.forEach {
            lista.add(it)
            Log.i("AGENDA-CONTATO", "Contado adicionado a lista: $it")
        }
        val request = Request.Builder()
            .get()
            .url("https://fatec-2024-1s-pdmi-default-rtdb.firebaseio.com/agenda.json")
            .build()
        val response = object : Callback {
            override fun onFailure(call: Call?, e: IOException?) {
                Log.e("AGENDA-CONTATO", e?.message.toString())
            }

            override fun onResponse(call: Call?, response: Response?) {
                val body = response?.body()
                val type: Type = object : TypeToken<Map<String?, Contato?>?>() {}.type
//                val myMap: Map<String, Contato> = gson.fromJson(body?.string(), type)
                val myMap: Map<String, Contato> = gson.fromJson(jsonString, type)
                Log.i("AGENDA-CONTATO", "Map Keys: ${myMap.keys}")
                Log.i("AGENDA-CONTATO", "Map Values: ${myMap.values}")
                myMap.values.forEach {
                    lista.add(it)
                    Log.i("AGENDA-CONTATO", "Contado adicionado a lista: $it")
                }
            }
        }
        clientHttp.newCall(request).enqueue(response)
    }

    override fun onClick(position: Int, contato: Contato) {
        Log.i("AGENDA-CONTATO",
            "Clicado no ViewHolder: Positiion $position   Contato: $contato")
    }
}