package edu.curso.agenda

import android.util.Log
import androidx.lifecycle.ViewModel
import edu.curso.agenda.entity.Contato

class ContatoActivityViewModel : ViewModel() {

    private var contatoAtual = Contato("", "")
    private val listaContatos = mutableListOf<Contato>()

    public fun getContato() : Contato {
        return this.contatoAtual
    }

    public fun setContato(valor : Contato) {
        this.contatoAtual = valor
    }

    public fun addContato() {
        listaContatos.add(contatoAtual)
        Log.i("AGENDA_CONTATOS", "A Lista possui ${listaContatos.size} elementos")
    }

    public fun getListaContatos() : List<Contato> {
        return listaContatos
    }

}