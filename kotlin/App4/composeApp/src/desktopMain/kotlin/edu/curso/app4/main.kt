package edu.curso.app4

import androidx.compose.ui.window.Window
import androidx.compose.ui.window.application

fun main() = application {
    Window(
        onCloseRequest = ::exitApplication,
        title = "App4",
    ) {
        HomeScreen()
    }
}