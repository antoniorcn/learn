package edu.curso.contadorlivedata

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel

class ContadorViewModel(startValue : Int) : ViewModel() {
    private var contador = MutableLiveData<Int>()
    public val contadorData : LiveData<Int>  get() = contador
    init {
        this.contador.value = startValue
    }
    fun getContador() : Int? {
        return contador.value
    }

    fun getIncrementedCount() {
        this.contador.value = (this.contador.value)?.plus(1)
    }
}