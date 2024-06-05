package edu.curso.agenda_contato_recycleview_basic1.model

data class Contato (
    var nome : String = "",
    var telefone : String = "",
    var email : String = ""
    ) {
    override fun toString() : String {
        return this.nome + "-" + this.telefone
    }
}
