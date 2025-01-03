package com.jetbrains.mybirdapp.model

import kotlinx.serialization.Serializable

@Serializable
data class BirdImage(
    var category : String = "",
    var path : String = "",
    var author : String = "")
