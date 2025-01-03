package com.jetbrains.mybirdapp.shared

@Suppress("EXPECT_ACTUAL_CLASSIFIERS_ARE_IN_BETA_WARNING")
expect class EmailClient {
    fun open( title : String, body : String, onComplete : (Boolean) -> Unit )
}