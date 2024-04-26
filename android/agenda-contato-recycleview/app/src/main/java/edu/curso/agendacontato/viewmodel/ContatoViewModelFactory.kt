package edu.curso.agendacontato.viewmodel

import android.content.Context
import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import edu.curso.agendacontato.databinding.ContatoActivityBinding
import java.lang.IllegalArgumentException

class ContatoViewModelFactory(private val context: Context,
                              private val binding: ContatoActivityBinding) :
    ViewModelProvider.Factory {
        override fun <T : ViewModel> create(modelClass : Class<T>) : T  {
            if (modelClass.isAssignableFrom(ContatoViewModel::class.java)) {
                return ContatoViewModel(context, binding) as T
            } else {
                throw IllegalArgumentException("Unknown View Model Class")
            }
        }
}