package com.arcarini.casetool

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform