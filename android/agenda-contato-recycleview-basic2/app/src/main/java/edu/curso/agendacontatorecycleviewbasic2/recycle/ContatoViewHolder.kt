package edu.curso.agendacontatorecycleviewbasic2.recycle

import android.view.View
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView
import edu.curso.agendacontatorecycleviewbasic2.R

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