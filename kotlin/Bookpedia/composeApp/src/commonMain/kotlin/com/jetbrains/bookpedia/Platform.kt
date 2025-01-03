package com.jetbrains.bookpedia

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform