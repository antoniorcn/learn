package edu.curso

import kotlin.concurrent.thread
import kotlinx.coroutines.coroutineScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import kotlinx.coroutines.runBlocking
import kotlin.time.Duration.Companion.seconds
import kotlin.time.measureTime

fun executarThreads() {
    repeat(50_000) {
        thread {
            Thread.sleep(5000L)
            print(".")
        }
    }
}

suspend fun executarCoroutines()  = coroutineScope { // this: CoroutineScope
    // Launches 50,000 coroutines that each wait five seconds, then print a period
    repeat(50_000) {
        this.launch {
            delay(5.seconds)
            print(".")
        }
    }
}

fun main() {
    val tempo = measureTime {
        runBlocking { executarCoroutines() }
    }
    println("""Tempo decorrido:\n
        $tempo segundos\n
        ${tempo.inWholeMilliseconds} ms """)
}
