package edu.curso.agendacontato.activities

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import edu.curso.agendacontato.databinding.ContatoActivityBinding
import edu.curso.agendacontato.viewmodel.ContatoViewModel
import edu.curso.agendacontato.viewmodel.ContatoViewModelFactory

class ContatoActivity : AppCompatActivity() {
    private lateinit var binding : ContatoActivityBinding
    private lateinit var viewModel: ContatoViewModel
    override fun onCreate(bundle : Bundle?) {
        super.onCreate(bundle)
        binding = ContatoActivityBinding.inflate(layoutInflater)
        setContentView(binding.root)
        val contatoViewModelFactory = ContatoViewModelFactory(this, binding)
        viewModel = ViewModelProvider(this, contatoViewModelFactory)[ContatoViewModel::class.java]
        binding.btnSalvar.setOnClickListener {  }

    }
}