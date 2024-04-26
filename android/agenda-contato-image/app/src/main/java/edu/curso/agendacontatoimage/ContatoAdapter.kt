package edu.curso.agendacontatoimage

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ArrayAdapter
import android.widget.ImageView
import android.widget.TextView

class ContatoAdapter(private val context: Context) :
        ArrayAdapter<Contato>(context, 0) {

    override fun getView(position: Int, convertView: View?, parent: ViewGroup): View {
        val view = convertView ?: LayoutInflater.from(context).inflate(R.layout.contato_item, parent, false)
        val contato = getItem(position)

        val edtNome = view.findViewById<TextView>(R.id.txtNomeItem)
        val edtTelefone = view.findViewById<TextView>(R.id.txtTelefoneItem)
        val edtEmail = view.findViewById<TextView>(R.id.txtEmailItem)
        val imgFoto = view.findViewById<ImageView>(R.id.imgPhotoItem)

        edtNome.setText(contato?.nome)
        edtTelefone.setText(contato?.telefone)
        edtEmail.setText(contato?.email)

        if (contato?.foto != null) {
            imgFoto.setImageBitmap( contato.foto )
        }
        return view
    }
}