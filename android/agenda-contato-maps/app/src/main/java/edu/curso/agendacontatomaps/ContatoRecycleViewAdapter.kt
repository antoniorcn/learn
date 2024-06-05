package edu.curso.agendacontatomaps

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class ContatoRecycleViewAdapter(context: Context, listaContatos : List<Contato>) : RecyclerView.Adapter<ContatoRecycleViewAdapter.ViewHolder>() {

    private lateinit var listaContatos : List<Contato>
    private lateinit var mInflater : LayoutInflater
    init {
        this.listaContatos = listaContatos
        mInflater = LayoutInflater.from(context)
    }

    class ViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {

        lateinit var txtNome : TextView
        lateinit var txtTelefone : TextView
        lateinit var txtEmail : TextView

        init {
            txtNome = itemView.findViewById(R.id.txtRowNome)
            txtTelefone = itemView.findViewById(R.id.txtRowTelefone)
            txtEmail = itemView.findViewById(R.id.txtRowEmail)
        }

    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        val view = mInflater.inflate(R.layout.contato_row_layout, parent, false)
        return ViewHolder( view )
    }

    override fun getItemCount(): Int {
        return this.listaContatos.size
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        val contato = this.listaContatos[position]
        holder.txtNome.text = contato.nome
        holder.txtTelefone.text = contato.telefone
        holder.txtEmail.text = contato.email
    }

}