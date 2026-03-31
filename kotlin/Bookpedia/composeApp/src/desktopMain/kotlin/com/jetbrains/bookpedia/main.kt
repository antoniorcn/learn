package com.jetbrains.bookpedia

import androidx.compose.ui.window.Window
import androidx.compose.ui.window.application
import com.jetbrains.bookpedia.di.initKoin

fun main() = application {
    initKoin()
    Window(
        onCloseRequest = ::exitApplication,
        title = "Bookpedia",
    ) {
        App()
    }
}