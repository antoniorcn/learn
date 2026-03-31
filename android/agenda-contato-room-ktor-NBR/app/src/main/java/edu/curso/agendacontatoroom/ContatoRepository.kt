package edu.curso.agendacontatoroom

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.flow.emitAll
import android.util.Log

class ContatoRepository (
    private val dao: ContatoDAO,
    private val api: ContatoAPI
) {

   suspend fun atualizar() {
        try {
            Log.i("AGENDA_CONTATO", "Tentando ler os contatos da rede")
            val contatosRemotos = api.getAll()
            Log.i("AGENDA_CONTATO", "Contatos Lidos: $contatosRemotos")
            dao.clear()
            dao.insertAll(contatosRemotos) // Atualiza cache
            Log.i("AGENDA_CONTATO", "Contatos inseridos na base local")
        } catch (e: Exception) {
            // Se houver erro de rede, segue com o cache.
            Log.e("AGENDA_CONTATO","Erro: ",e)
        }
    }

    fun getContatos(): Flow<List<Contato>> = flow {
        atualizar()
        Log.i("AGENDA_CONTATO", "Fornecendo os contatos do banco de dados")
        emitAll(dao.getAll()) // Emite o cache local primeiro
    }

    suspend fun adicionar( contato : Contato ) {
            // dao.insert(contato)
        api.create(contato)
        atualizar()
    }

    suspend fun apagar( contato : Contato ) {
        // dao.delete(contato)
        api.remove(contato)
        atualizar()
    }
}