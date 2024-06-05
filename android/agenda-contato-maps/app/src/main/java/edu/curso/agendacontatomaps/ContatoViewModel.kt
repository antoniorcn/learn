package edu.curso.agendacontatomaps

import androidx.lifecycle.ViewModel

class ContatoViewModel : ViewModel() {
    private val listaContatos = ArrayList<Contato>()
    private var contato = Contato()

    fun getContato() : Contato {
        return contato
    }

    fun setContato( value : Contato ) {
        this.contato = value
    }

    fun getListaContatos() : ArrayList<Contato> {
        return this.listaContatos
    }
}