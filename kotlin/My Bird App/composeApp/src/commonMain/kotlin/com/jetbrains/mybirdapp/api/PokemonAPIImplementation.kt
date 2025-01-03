package com.jetbrains.mybirdapp.api

import com.jetbrains.mybirdapp.model.PokemonResponse
import com.jetbrains.mybirdapp.shared.client
import io.ktor.client.call.body
import io.ktor.client.request.get
import kotlinx.coroutines.flow.Flow

class PokemonAPIImplementation {
    suspend fun getPokemonList() : Flow<PokemonResponse> {
        return client.get("pokemon").body()
    }
}