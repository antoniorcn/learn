package edu.curso.agendacontatorecycleviewbasic2.recycle

import android.content.Context
import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import edu.curso.agendacontatorecycleviewbasic2.R
import edu.curso.agendacontatorecycleviewbasic2.model.Contato

class ContatoAdapter(val contexto : Context, val lista : ArrayList<Contato>) :
    RecyclerView.Adapter<ContatoViewHolder>() {

    private lateinit var clickListener: ItemClickListener


    var inflater: LayoutInflater = LayoutInflater.from(contexto)

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ContatoViewHolder {
        val view = inflater.inflate(
            R.layout.contato_row_layout,
            parent, false)
        return ContatoViewHolder( view )
    }

    override fun getItemCount(): Int {
        return lista.size
    }

    override fun onBindViewHolder(holder: ContatoViewHolder, position: Int) {
        val contato = lista[position]
        holder.txtNome.text = contato.nome
        holder.txtTelefone.text = contato.telefone
        holder.txtEmail.text = contato.email

        holder.itemView.setOnClickListener{
            if (clickListener != null) {
                clickListener.onClick(position, contato)
            }
        }
    }

    fun setClickListener( value : ItemClickListener ) {
        this.clickListener = value
    }
}