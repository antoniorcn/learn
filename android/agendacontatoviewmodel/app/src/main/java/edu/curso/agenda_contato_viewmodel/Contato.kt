package edu.curso.agendacontatoimage

import android.graphics.Bitmap

data class Contato(val nome : String = "",
                   val telefone: String = "",
                   val email: String = "",
                   val foto: Bitmap? = null) {
}