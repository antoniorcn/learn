package edu.curso.aposentadoria

import android.app.Activity
import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.EditText
import android.widget.RadioButton
import android.widget.TextView

class MainActivity : Activity() {

    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)
        Log.i("APOSENTADORIA","Activity executada")
        setContentView(R.layout.main_layout)

        val btnOk = findViewById<Button>(R.id.btnOk)
        val txtSexo = findViewById<EditText>(R.id.edtSexo)
        val txtIdade = findViewById<EditText>(R.id.edtIdade)
        val txtResultado = findViewById<TextView>(R.id.txtResultado)
        val radFeminino = findViewById<RadioButton>(R.id.radFeminino)
        val radMasculino = findViewById<RadioButton>(R.id.radMasculino)
        btnOk.setOnClickListener {
            var idadeMaxima = 60
            val idade = Integer.parseInt(txtIdade.text.toString())
            // txtSexo.text.toString().uppercase()[0] == 'M' ||
            if (radMasculino.isChecked()) {
                idadeMaxima = 65
            }
            val resultado = idadeMaxima - idade
            txtResultado.text = "Resultado: $resultado"
        }
    }
}