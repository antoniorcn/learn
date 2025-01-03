package com.jetbrains.mybirdapp.viewmodel

import androidx.lifecycle.ViewModel
import com.jetbrains.mybirdapp.api.PokemonAPIImplementation

class BirdsViewModel : ViewModel() {

    private val pokemonAPI = PokemonAPIImplementation()


}