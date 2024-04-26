package edu.curso.counterviewmodel

import androidx.lifecycle.ViewModel

class ContadorViewModel(val startValue : Int) : ViewModel() {
    private var contador : Int = 0
    init {
        contador = startValue
    }
    fun getContador() : Int {
        return contador
    }

    fun getIncrementedCount() : Int {
        return ++contador
    }
}