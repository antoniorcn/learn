package edu.curso.componentes

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform