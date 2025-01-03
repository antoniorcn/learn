package com.jetbrains.mybirdapp.ui

sealed class PokeUiEvent {
    data object GetPokemonList: PokeUiEvent()
}