package edu.curso.mtpapp2

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform