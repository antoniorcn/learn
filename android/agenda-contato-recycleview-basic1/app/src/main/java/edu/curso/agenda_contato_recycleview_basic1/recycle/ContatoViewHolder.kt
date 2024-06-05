package edu.curso.agenda_contato_recycleview_basic1.recycle

import android.util.Log
import android.view.View
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import edu.curso.agenda_contato_recycleview_basic1.R

class ContatoViewHolder(view : View) : RecyclerView.ViewHolder(view) {
    var txtNome : TextView
    var txtTelefone : TextView
    var txtEmail : TextView
    init {
        txtNome = view.findViewById(R.id.txtRowNome)
        txtTelefone = view.findViewById(R.id.txtRowTelefone)
        txtEmail = view.findViewById(R.id.txtRowEmail)
    }
}