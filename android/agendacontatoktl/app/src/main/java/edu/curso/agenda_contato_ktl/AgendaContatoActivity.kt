package edu.curso.agenda_contato_ktl

import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity

class AgendaContatoActivity : AppCompatActivity() {

    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)

        if (bundle != null) {
            var b: Bundle = bundle
        }
        var j = 10
        var s : String? = "Teste"
        if (j > 5) {
            s = null
        }
        var st : String = s ?: "Teste 2"
        println(st.uppercase())

        setContentView(R.layout.agenda_contato_layout)
        Log.i("AppAgendaContato", "OnCreate() - Invocado")
    }
}