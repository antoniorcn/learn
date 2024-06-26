package edu.curso.agendacontatorecycleviewbasic2.activity

import android.content.Intent
import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import edu.curso.agendacontatorecycleviewbasic2.databinding.FormularioLayoutBinding
import edu.curso.agendacontatorecycleviewbasic2.model.Contato
import edu.curso.agendacontatorecycleviewbasic2.viewmodel.ContatoViewModel

class FormularioActivity : AppCompatActivity() {
    private lateinit var contatoViewModel: ContatoViewModel
    private lateinit var binding : FormularioLayoutBinding

    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)
        binding= FormularioLayoutBinding.inflate( layoutInflater )
        contatoViewModel = ViewModelProvider(this)[ContatoViewModel::class.java]
        binding.viewModel = contatoViewModel
        binding.lifecycleOwner = this
        setContentView(binding.root)

        val tempContatoSerializable = intent.getSerializableExtra("CONTATO-SELECIONADO")

        binding.apply {
            if (tempContatoSerializable != null && tempContatoSerializable is Contato) {
                val contatoTemp: Contato? = tempContatoSerializable
                Log.i("AGENDA-CONTATO", "Contato Selecionado: $contatoTemp")
                if (contatoTemp != null) {
                    contatoViewModel.contatoData.value?.nome = contatoTemp.nome
                    contatoViewModel.contatoData.value?.telefone = contatoTemp.telefone
                    contatoViewModel.contatoData.value?.email = contatoTemp.email
                }
            }
            btnGravar.setOnClickListener {
                contatoViewModel.contatoData.value?.nome = txtNome.text.toString()
                contatoViewModel.contatoData.value?.telefone = txtTelefone.text.toString()
                contatoViewModel.contatoData.value?.email = txtEmail.text.toString()
                Log.i("AGENDA-CONTATO", "Contato: ${contatoViewModel.contatoData.value}")
                contatoViewModel.adicionarContato()
            }
            btnListagem.setOnClickListener {
                val intent = Intent(this@FormularioActivity, ListagemActivity::class.java)
                startActivity(intent)
            }
        }
    }
}