package edu.curso.testeapp

import android.app.Activity
import android.content.Intent
import android.os.Bundle
import android.widget.Button

class SegundaTelaActivity : Activity() {
    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)
        setContentView(R.layout.segunda_tela_layout)
        val btnPrimeiraTela = findViewById<Button>(R.id.btn_voltar_primeira_tela)
        btnPrimeiraTela.setOnClickListener {
            val intentOutraTela = Intent(this, SegundaTelaActivity::class.java)
            startActivity(intentOutraTela)
        }
    }
}