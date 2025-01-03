package com.jetbrains.mybirdapp.shared

@Suppress("EXPECT_ACTUAL_CLASSIFIERS_ARE_IN_BETA_WARNING")
actual class EmailClient {
    actual fun open(
        title: String,
        body: String,
        onComplete: (Boolean) -> Unit
    ) {
        val message = "Email $title enviado para $body por meio do Desktop"
        print(message)
        onComplete(true)
    }

}