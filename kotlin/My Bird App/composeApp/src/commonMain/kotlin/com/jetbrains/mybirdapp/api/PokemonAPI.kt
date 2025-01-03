package com.jetbrains.mybirdapp.api

import com.jetbrains.mybirdapp.model.PokemonResponse
import kotlinx.coroutines.flow.Flow

interface PokemonAPI {
    suspend fun getPokemonList() : Flow<PokemonResponse>
}