package edu.curso.agenda_contato_recycleview_basic1.recycle

import android.view.View
import edu.curso.agenda_contato_recycleview_basic1.model.Contato


interface ItemClickListener {
    fun onClick(position: Int, model: Contato)
}