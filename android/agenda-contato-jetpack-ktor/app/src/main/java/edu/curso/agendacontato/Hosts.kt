package edu.curso.agendacontato
import kotlinx.serialization.Serializable

interface Destinations {
    val nome : String
}

@Serializable
object FormDestination : Destinations { override val nome = "Form" }

@Serializable
object ListDestination : Destinations { override val nome = "List" }
