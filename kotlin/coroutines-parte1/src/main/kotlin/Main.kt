package edu.curso

import kotlinx.coroutines.*
fun multiplicar(numero1 : Int, numero2 : Int) : Int {
    return numero1 * numero2
}
suspend fun multiplicarAsync(numero1 : Int, numero2 : Int) : Deferred<Int> {
    return coroutineScope {
        this.async {
            multiplicar(numero1, numero2)
        }
    }
}
fun main2() {
    println("Inicio do Programa")
    CoroutineScope(Dispatchers.Default).also {
        it.launch {
            val resultado = multiplicarAsync(10, 35).await()
            println("Resultado: $resultado")
        }
    }
    Thread.sleep(5000L)
    println("Fim do Programa")
}

fun main3() {
    println("Inicio do Programa - Runblocking")
    runBlocking {
        val resultado = multiplicarAsync(10, 35).await()
        println("Resultado: $resultado")
    }
    println("Fim do Programa")
}

fun main() {
    val job = MainScope().launch {
        delay(1000)
        println("Terminou!")
    }
}

