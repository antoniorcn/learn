package edu.curso.listacompras

import android.app.Activity
import android.os.Bundle
import android.widget.ArrayAdapter
import androidx.databinding.DataBindingUtil
import edu.curso.listacompras.databinding.ContatoActivityBinding
import edu.curso.listacompras.databinding.ProdutoActivityBinding

class ContatoActivity: Activity() {

    private lateinit var binding : ContatoActivityBinding
    override fun onCreate(bundle : Bundle?) {
        super.onCreate(bundle)
        binding =  ContatoActivityBinding.inflate( layoutInflater  )
        setContentView(binding.root)


        val adapter = ArrayAdapter<String>(this, android.R.layout.simple_list_item_1)

        val item = mutableListOf<String>("Coca Cola", "Arroz", "Feijao");
        intent.getStringExtra("MSG")
        adapter.addAll(item);

        // val lstView = findViewById<ListView>(R.id.lstView)

        binding.apply {
            lstView.adapter = adapter

            btnAdicionar.setOnClickListener {
                adapter.add(edtNome.text.toString())
            }
        }
    }
}