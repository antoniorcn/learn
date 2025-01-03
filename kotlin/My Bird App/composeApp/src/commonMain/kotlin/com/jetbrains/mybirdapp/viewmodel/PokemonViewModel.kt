package com.jetbrains.mybirdapp.viewmodel

import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.jetbrains.mybirdapp.api.PokemonAPIImplementation
import com.jetbrains.mybirdapp.model.Pokemon
import kotlinx.coroutines.launch

class PokemonViewModel : ViewModel() {
    val loading = mutableStateOf(false)
    val error = mutableStateOf("")
    val lista = mutableStateListOf<Pokemon>()
    private val repo = PokemonAPIImplementation()

    init {
        getPokemonList()
    }

//    fun onEvent(event: PokeUiEvent){
//        when(event){
//            is PokeUiEvent.GetPokemonList->{
//                getPokemonList()
//            }
//        }
//    }

    private fun getPokemonList(){
        viewModelScope.launch {

            repo.getPokemonList().collect{
                lista.clear()
                lista.addAll( it.results )
            }
        }
    }

}