package edu.curso.approomdb1.db

class ContatoRepository( private val contatoDao : ContatoDAO) {

    val todosContatos = contatoDao.pesquisarPorTodos()

    suspend fun insert(contato : Contato) {
        contatoDao.insert(contato)
    }

    suspend fun update(contato : Contato) {
        contatoDao.update(contato)
    }

    suspend fun delete(contato : Contato) {
        contatoDao.delete(contato)
    }
}