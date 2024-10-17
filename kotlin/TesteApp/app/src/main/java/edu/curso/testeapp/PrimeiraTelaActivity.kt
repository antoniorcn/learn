package edu.curso.testeapp

import android.app.Activity
import android.content.Intent
import android.os.Bundle
import android.widget.Button

class PrimeiraTelaActivity : Activity() {
    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)
        setContentView(R.layout.primeira_tela_layout)

        val btnOutraTela = findViewById<Button>(R.id.btn_ir_proxima_tela)
        btnOutraTela.setOnClickListener {
            val intentOutraTela = Intent(this, SegundaTelaActivity::class.java)
            startActivity(intentOutraTela)
        }
    }
}