package edu.curso.agendacontatomaps

import android.content.Intent
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import edu.curso.agendacontatomaps.databinding.FormularioLayoutBinding
import java.io.Serializable




class AgendaFormActivity : AppCompatActivity() {

    private lateinit var binding : FormularioLayoutBinding
    private lateinit var viewModel : ContatoViewModel

    override fun onCreate(bundle : Bundle?) {
        super.onCreate(bundle)
        binding = FormularioLayoutBinding.inflate( layoutInflater )
        viewModel = ViewModelProvider(this)[ContatoViewModel::class.java]

        setContentView(binding.root)

        binding.apply {
            contato = viewModel.getContato()
            btnGravar.setOnClickListener {
                val contato = Contato(
                    txtNome.text.toString(),
                    txtTelefone.text.toString(),
                    txtEmail.text.toString())
                viewModel.setContato( contato )
                viewModel.getListaContatos().add( contato )
            }

            btnListagem.setOnClickListener {
                val intent = Intent(this@AgendaFormActivity, AgendaListaActivity::class.java)
                val args = Bundle()
                args.putSerializable("CONTATOLIST", viewModel.getListaContatos() as Serializable?)
                intent.putExtra("BUNDLE", args)
                startActivity(intent)
            }
            btnMapa.setOnClickListener {
                val intent = Intent(this@AgendaFormActivity, MapsActivity::class.java)
                startActivity(intent)
            }
        }
    }
}