package edu.curso.listacompras

import android.app.Activity
import android.os.Bundle
import android.widget.ArrayAdapter
import androidx.databinding.DataBindingUtil
import edu.curso.listacompras.databinding.ProdutoActivityBinding

class ProdutoActivity: Activity() {

    private lateinit var binding : ProdutoActivityBinding
    override fun onCreate(bundle : Bundle?) {
        super.onCreate(bundle)
        binding =  DataBindingUtil.setContentView(this, R.layout.produto_activity)
        val adapter = ArrayAdapter<String>(this, android.R.layout.simple_list_item_1)

        val item = mutableListOf<String>("Coca Cola", "Arroz", "Feijao");
        intent.getStringExtra("MSG")
        adapter.addAll(item);

        val p : Produto = Produto("Sabão em Pó", "10.0")

        binding.produto = p

        // val lstView = findViewById<ListView>(R.id.lstView)

        binding.apply {
            lstView.adapter = adapter

            btnAdicionar.setOnClickListener {
                adapter.add(edtNome.text.toString())
            }
        }
    }
}