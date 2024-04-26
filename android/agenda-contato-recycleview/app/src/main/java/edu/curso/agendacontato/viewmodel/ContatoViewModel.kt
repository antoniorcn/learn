package edu.curso.agendacontato.viewmodel

import android.content.Context
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import edu.curso.agendacontato.databinding.ContatoActivityBinding
import edu.curso.agendacontato.entidades.Contato

class ContatoViewModel(context: Context, binding: ContatoActivityBinding) : ViewModel() {
    private var lista : MutableLiveData<MutableList<Contato>> = MutableLiveData()
    val listaData : LiveData<MutableList<Contato>> get() = lista

    private var contato =  MutableLiveData<Contato>()
    val contatoData : LiveData<Contato> get() = contato


    fun adicionarContato(binding: ContatoActivityBinding) {

    }

}