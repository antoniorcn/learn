package com.jetbrains.mybirdapp

import androidx.compose.ui.window.Window
import androidx.compose.ui.window.application
import com.jetbrains.mybirdapp.di.initializeKoin
import com.jetbrains.mybirdapp.di.targetModule
import org.koin.compose.KoinApplication
import org.koin.core.KoinApplication

fun main() = application {
    KoinApplication(application = {
        // your preview config here
        modules(targetModule)
    }) {
        Window(
            onCloseRequest = ::exitApplication,
            title = "My Bird App",
        ) {
            App()
        }
    }
}