package edu.curso.app4

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform