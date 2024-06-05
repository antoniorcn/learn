package edu.curso.agendacontatorecycleviewbasic2.recycle

import edu.curso.agendacontatorecycleviewbasic2.model.Contato


interface ItemClickListener {
    fun onClick(position: Int, model: Contato)
}