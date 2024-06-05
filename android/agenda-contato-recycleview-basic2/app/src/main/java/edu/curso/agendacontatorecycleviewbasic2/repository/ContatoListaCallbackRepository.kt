package edu.curso.agendacontatorecycleviewbasic2.repository

import edu.curso.agendacontatorecycleviewbasic2.model.Contato
import java.io.IOException

interface ContatoListaCallbackRepository {
    fun onSucesso(lista : List<Contato>)
    fun onError(error : IOException?)
}