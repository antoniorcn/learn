package edu.curso.agendacontatoimage

import android.app.Activity
import android.content.Intent
import android.graphics.BitmapFactory
import android.os.Bundle
import android.view.View
import android.widget.ArrayAdapter
import android.widget.Button
import android.widget.EditText
import android.widget.ImageView
import android.widget.ListView

class ContatoActivity: Activity() {
    private var lista = mutableListOf<Contato>()
    private val COD_IMG = 254
    override fun onCreate(bundle : Bundle?) {
        super.onCreate(bundle)
        setContentView(R.layout.contato_activity)
        lista = mutableListOf()
        val adapter = ContatoAdapter(this)

        adapter.clear()
        adapter.addAll(lista)

        val lstView = findViewById<ListView>(R.id.lstView)
        val btnAdicionar = findViewById<Button>(R.id.btnAdicionar)
        val edtNome = findViewById<EditText>(R.id.edtNome)
        val edtTelefone = findViewById<EditText>(R.id.edtTelefone)
        val edtEmail = findViewById<EditText>(R.id.edtEmail)
        val imgFoto = findViewById<ImageView>(R.id.imgPhoto)

        lstView.adapter = adapter

        imgFoto.setOnClickListener {
            val intent = Intent(Intent.ACTION_GET_CONTENT)
            intent.type = "image/*"
            startActivityForResult(
                Intent.createChooser(intent, "Escolha uma imagem"), COD_IMG )
        }

        btnAdicionar.setOnClickListener {
            val c = Contato(
                edtNome.text.toString(),
                edtTelefone.text.toString(),
                edtEmail.text.toString())
            lista.add(c)
            updateArrayAdapter()
        }
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        if (requestCode == COD_IMG && resultCode == Activity.RESULT_OK) {
            if (data != null) {
                val inputStream = contentResolver.openInputStream(data.data!!)
                val imgFoto = findViewById<ImageView>(R.id.imgPhoto)
                imgFoto.setImageBitmap( BitmapFactory.decodeStream( inputStream ) )
            }
        }
    }

    private fun updateArrayAdapter() {
        val listView = findViewById<ListView>(R.id.lstView)
        val adapter = listView.adapter as ArrayAdapter<Contato>
        adapter.clear()
        adapter.addAll(lista)
    }
    override fun onResume() {
        super.onResume()
        updateArrayAdapter()
    }
}