package edu.curso.flow_demo

import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.collect
import kotlinx.coroutines.flow.filter
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.flow.forEach
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.flow.onEach
import kotlinx.coroutines.launch

class AppViewModel : ViewModel() {
    val count = mutableStateOf(0)
    val contador = flow {
        while (count.value < 100) {
            delay(1000)
            println("Invocado")
            count.value++
            emit(count.value)
        }
    }

    init {
        coletarContador()
    }

    fun coletarContador() {
        viewModelScope.launch {
            contador
                .onEach {
                    println("Emitiu: $it") }
                .filter {
                    it % 2 == 0
                }
                .map {
                    it * it
                }
                .collect {
                    println("Valor: $it")
                }
        }
    }

    fun resetCounter() {
        count.value = 0
    }

}