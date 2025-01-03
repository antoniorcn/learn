package com.jetbrains.mybirdapp.ui

import com.jetbrains.mybirdapp.model.Pokemon

data class PokeListUiState(
    var data: List<Pokemon> = emptyList(),
    var error: String = "",
    var loading: Boolean = false
)