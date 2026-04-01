package edu.curso.flow_demo

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform