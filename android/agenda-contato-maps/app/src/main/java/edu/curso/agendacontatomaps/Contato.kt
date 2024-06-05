package edu.curso.agendacontatomaps

import java.io.Serializable

data class Contato(var nome : String = "", var telefone : String = "", var email : String = "") : Serializable {

}
