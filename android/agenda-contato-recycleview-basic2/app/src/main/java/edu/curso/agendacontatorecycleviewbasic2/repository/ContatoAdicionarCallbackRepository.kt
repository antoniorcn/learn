package edu.curso.agendacontatorecycleviewbasic2.repository

import edu.curso.agendacontatorecycleviewbasic2.model.Contato
import edu.curso.agendacontatorecycleviewbasic2.model.ContatoId
import java.io.IOException

interface ContatoAdicionarCallbackRepository {
    fun onSucesso(id : ContatoId)
    fun onError(error : IOException?)
}