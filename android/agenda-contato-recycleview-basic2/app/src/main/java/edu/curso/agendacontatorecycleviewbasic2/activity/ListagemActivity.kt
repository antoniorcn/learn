package edu.curso.agendacontatorecycleviewbasic2.activity

import android.content.Intent
import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import androidx.recyclerview.widget.LinearLayoutManager
import edu.curso.agendacontatorecycleviewbasic2.databinding.ListagemLayoutBinding
import edu.curso.agendacontatorecycleviewbasic2.model.Contato
import edu.curso.agendacontatorecycleviewbasic2.recycle.ContatoAdapter
import edu.curso.agendacontatorecycleviewbasic2.recycle.ItemClickListener
import edu.curso.agendacontatorecycleviewbasic2.viewmodel.ContatoViewModel

class ListagemActivity: AppCompatActivity(), ItemClickListener {
    private lateinit var binding: ListagemLayoutBinding
    private lateinit var contatoViewModel: ContatoViewModel

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding=ListagemLayoutBinding.inflate( layoutInflater )
        contatoViewModel = ViewModelProvider(this)[ContatoViewModel::class.java]
        binding.viewModel = contatoViewModel
        binding.lifecycleOwner = this
        setContentView(binding.root)
        Log.i("AGENDA-CONTATO", "Contato View Model Lista ==> ${contatoViewModel.contatoLista}")
        val adapter = ContatoAdapter(this, contatoViewModel.contatoLista.value!!)
        adapter.setClickListener(this@ListagemActivity)
        binding.apply {
            rcvContatos.adapter = adapter
            rcvContatos.layoutManager = LinearLayoutManager(this@ListagemActivity)

            btnFormulario.setOnClickListener {
                moveFormulario(null)
            }
        }
    }

    override fun onStart() {
        super.onStart()
        contatoViewModel.atualizarContatoLista(binding.rcvContatos.adapter as ContatoAdapter)
    }

    private fun moveFormulario(contato : Contato?) {
        val intent = Intent(this, FormularioActivity::class.java)
        intent.putExtra("CONTATO-SELECIONADO", contato)
        startActivity(intent)
    }

    override fun onClick(position: Int, contato: Contato) {
        Log.i("AGENDA-CONTATO",
            "Clicado no ViewHolder: Positiion $position   Contato: $contato")
        moveFormulario(contato)
    }
}