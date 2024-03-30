package edu.curso.agenda.ui

import android.os.Bundle
import android.widget.ArrayAdapter
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import edu.curso.agenda.ContatoActivityViewModel
import edu.curso.agenda.databinding.ContatoActivityBinding
import edu.curso.agenda.entity.Contato

class ContatoActivity: AppCompatActivity() {

    private lateinit var binding : ContatoActivityBinding
    private lateinit var viewModel : ContatoActivityViewModel
    override fun onCreate(bundle : Bundle?) {
        super.onCreate(bundle)
        viewModel = ViewModelProvider(this)[ContatoActivityViewModel::class.java]
        binding =  ContatoActivityBinding.inflate( layoutInflater  )
        setContentView(binding.root)
        binding.contato = viewModel.getContato()
        binding.apply {

            btnAdicionar.setOnClickListener {
                viewModel.addContato()
            }
        }
    }
}