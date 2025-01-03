package com.jetbrains.mybirdapp

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform