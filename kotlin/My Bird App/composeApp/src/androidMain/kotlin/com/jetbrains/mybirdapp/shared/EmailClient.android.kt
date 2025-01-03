package com.jetbrains.mybirdapp.shared

import android.content.Context

@Suppress("EXPECT_ACTUAL_CLASSIFIERS_ARE_IN_BETA_WARNING")
actual class EmailClient (private val contexto : Context) {
    actual fun open(
        title: String,
        body: String,
        onComplete: (Boolean) -> Unit
    ) {
        val message = "Email $title enviado para $body por meio do Android"
        print(message)
        onComplete(true)
    }

}