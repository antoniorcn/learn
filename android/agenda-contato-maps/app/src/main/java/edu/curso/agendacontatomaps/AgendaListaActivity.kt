package edu.curso.agendacontatomaps

import android.content.Intent
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.recyclerview.widget.LinearLayoutManager
import edu.curso.agendacontatomaps.databinding.ListaLayoutBinding
import kotlin.reflect.typeOf


class AgendaListaActivity : AppCompatActivity() {

    private lateinit var binding : ListaLayoutBinding
    private var listaContatos = ArrayList<Contato>()

    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)
        binding = ListaLayoutBinding.inflate( layoutInflater )
        val args = intent.getBundleExtra("BUNDLE")
        val arrayParameter = args!!.getSerializable("CONTATOLIST")
        val localArrayList =  arrayParameter as ArrayList<Contato>
        listaContatos.clear()
        listaContatos.addAll(localArrayList)

        setContentView(binding.root)

        binding.apply {
            rcvContatos.layoutManager = LinearLayoutManager(this@AgendaListaActivity)
            rcvContatos.adapter =
                ContatoRecycleViewAdapter(this@AgendaListaActivity,
                    listaContatos)
            btnListagemFormulario.setOnClickListener {
                val intent = Intent(this@AgendaListaActivity,
                    AgendaFormActivity::class.java)
                startActivity(intent)
            }
            btnListagemMapa.setOnClickListener {
                val intent = Intent(this@AgendaListaActivity,
                    MapsActivity::class.java)
                startActivity(intent)
            }
        }

    }
}