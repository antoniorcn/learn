package edu.curso.agendacontatorecycleviewbasic2.model

import java.io.Serial
import java.io.Serializable

data class ContatoId (var id : String)
data class Contato (
    var id : String? = "",
    var nome : String = "",
    var telefone : String = "",
    var email : String = ""
    ) : Serializable {
    override fun toString() : String {
        return this.nome + "-" + this.telefone
    }
}
