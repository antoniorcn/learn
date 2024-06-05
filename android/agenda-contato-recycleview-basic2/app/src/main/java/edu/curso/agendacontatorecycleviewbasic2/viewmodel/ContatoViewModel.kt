package edu.curso.agendacontatorecycleviewbasic2.viewmodel

import android.os.Handler
import android.os.Looper
import android.util.Log
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import edu.curso.agendacontatorecycleviewbasic2.model.Contato
import edu.curso.agendacontatorecycleviewbasic2.model.ContatoId
import edu.curso.agendacontatorecycleviewbasic2.recycle.ContatoAdapter
import edu.curso.agendacontatorecycleviewbasic2.repository.ContatoAdicionarCallbackRepository
import edu.curso.agendacontatorecycleviewbasic2.repository.ContatoListaCallbackRepository
import edu.curso.agendacontatorecycleviewbasic2.repository.ContatoRepository
import java.io.IOException

class ContatoViewModel : ViewModel() {
    private val _contatoData = MutableLiveData<Contato>()
    val contatoData: LiveData<Contato> = _contatoData
    private val _contatoLista = MutableLiveData<ArrayList<Contato>>()
    val contatoLista: LiveData<ArrayList<Contato>> = _contatoLista
    init {
        _contatoLista.value = ArrayList()
        _contatoData.value = Contato()
    }
    private val contatoRepository = ContatoRepository()
    fun atualizarContatoLista(adapter : ContatoAdapter) {
        contatoRepository.getContatos(object: ContatoListaCallbackRepository {
            override fun onError(error: IOException?) {
                Log.e("AGENDA-CONTATO", "Erro ao carregar a lista", error)
            }
            override fun onSucesso(listaRecebida: List<Contato>) {
                Log.i("AGENDA-CONTATO", "Lista carregada com sucesso")
                _contatoLista.value?.clear()
                _contatoLista.value?.addAll(listaRecebida)
                Handler(Looper.getMainLooper()).post {
                    /*My task*/
                    adapter.notifyDataSetChanged()
                }
            }
        })
    }
    fun adicionarContato() {
        if (_contatoData.value != null) {
            contatoRepository.addContato(
                _contatoData.value!!,
                object : ContatoAdicionarCallbackRepository {
                    override fun onError(error: IOException?) {
                        Log.e("AGENDA-CONTATO", "Erro ao gravar o contato", error)
                    }
                    override fun onSucesso(contatoId : ContatoId) {
                        Log.i("AGENDA-CONTATO", "Contato gravado com sucesso")
                    }
                })
        }
    }
}