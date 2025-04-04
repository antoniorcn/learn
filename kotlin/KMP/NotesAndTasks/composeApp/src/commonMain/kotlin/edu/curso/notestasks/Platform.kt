package edu.curso.notestasks

interface Platform {
    val name : String
}

expect fun getPlatform() : Platform
