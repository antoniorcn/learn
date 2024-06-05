package edu.curso.agenda_contato_recycleview_basic1.activity

import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.EditText
import androidx.appcompat.app.AppCompatActivity
import com.google.gson.Gson
import com.google.gson.reflect.TypeToken
import edu.curso.agenda_contato_recycleview_basic1.R
import edu.curso.agenda_contato_recycleview_basic1.model.Contato
import okhttp3.Call
import okhttp3.Callback
import okhttp3.MediaType
import okhttp3.OkHttpClient
import okhttp3.Request
import okhttp3.RequestBody
import okhttp3.Response
import java.io.IOException
import java.lang.reflect.Type


class FormularioActivity : AppCompatActivity() {

    var clientHttp = OkHttpClient()

    fun testeJSon() {
        val gson = Gson()
        val jsonString = """
            {
                "-NyVYx2BjSlu7piNDOuB": {
                    "email": "joao@teste.com",
                    "nome": "Joao Silva",
                    "telefone": "111111111"
                }
            }
        """
        val jsonTree = gson.toJsonTree(jsonString.replace('\n', ' '))
        val type: Type = object : TypeToken<Map<String?, Contato?>?>() {}.type
        val myMap: Map<String, Contato> = gson.fromJson(jsonString, type)

        Log.i("AGENDA-CONTATO", "JSONArray: ${jsonTree.isJsonArray}")
        Log.i("AGENDA-CONTATO", "JSONNull: ${jsonTree.isJsonNull}")
        Log.i("AGENDA-CONTATO", "JSONObject: ${jsonTree.isJsonObject}")
        Log.i("AGENDA-CONTATO", "JSONPrimitive: ${jsonTree.isJsonPrimitive}")
        Log.i("AGENDA-CONTATO", "Map Keys: ${myMap.keys}")
        Log.i("AGENDA-CONTATO", "Map Values: ${myMap.values}")
    }

    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)
        setContentView(R.layout.formulario_layout)
        // testeJSon()
        val btnGravar = findViewById<Button>(R.id.btnGravar)
        val btnListagem = findViewById<Button>(R.id.btnListagem)
        btnGravar.setOnClickListener {
            val txtNome = findViewById<EditText>(R.id.txtNome)
            val txtTelefone = findViewById<EditText>(R.id.txtTelefone)
            val txtEmail = findViewById<EditText>(R.id.txtEmail)

            val body = RequestBody.create(
                MediaType.parse("application/json"),
                """
                    {
                        "nome": "${txtNome.text}",
                        "telefone": "${txtTelefone.text}",
                        "email": "${txtEmail.text}"
                    }
                """.trimIndent()
            )

            val request = Request.Builder()
                .post(body)
                .url("https://fatec-2024-1s-pdmi-default-rtdb.firebaseio.com/agenda.json")
                .build()
            val response = object : Callback {
                override fun onFailure(call: Call?, e: IOException?) {
                    Log.e("AGENDA-CONTATO", e?.message.toString())
                }

                override fun onResponse(call: Call?, response: Response?) {
                    val body = response?.body()
                    body?.charStream()?.buffered()?.lines()?.forEach {
                        Log.i("AGENDA-CONTATO", it.toString())
                    }

                }
            }
            clientHttp.newCall(request).enqueue(response)
        }

        btnListagem.setOnClickListener {
            val intent = Intent(this, ListagemActivity::class.java)
            startActivity(intent)
        }
    }
}