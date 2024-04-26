package edu.curso.contadorlivedata

import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import java.lang.IllegalArgumentException

class ContadorActivityViewModelFactory(private val startValue : Int) :
        ViewModelProvider.Factory {
    override fun <T : ViewModel> create(modelClass: Class<T>): T {
        if (modelClass.isAssignableFrom(ContadorViewModel::class.java)) {
            return ContadorViewModel(startValue) as T
        }
        throw IllegalArgumentException("Unknown View Model Class")
    }
}