package edu.curso.agendacrudcomposeretrofit

import android.util.Log
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import kotlinx.coroutines.Dispatchers
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

class ContatoViewModel : ViewModel() {

    var _listaContatos : ArrayList<Contato> by mutableStateOf(arrayListOf())


    fun getContatos() {
        viewModelScope.launch (Dispatchers.IO) {
            withContext(Dispatchers.Main) {
                // _listaContatos.clear()
                _listaContatos = WebService.getContatos()
            }
        }
        Log.i(Constantes.TAG_PRINCIPAL, "Contatos: $_listaContatos")
    }

    fun addContato(contato : Contato) {
        viewModelScope.launch (Dispatchers.IO) {
            WebService.addContato(contato)
            getContatos()
        }
    }

}