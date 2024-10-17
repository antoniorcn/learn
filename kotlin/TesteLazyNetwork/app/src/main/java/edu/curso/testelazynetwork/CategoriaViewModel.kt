package edu.curso.testelazynetwork

import android.util.Log
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.launch

class CategoriaViewModel : ViewModel(){

    private val apiRepository = ApiRepository()
    // var categorias = mutableStateOf(ArrayList<Categoria>())
    val categorias = mutableStateListOf<Categoria>()

    var errorMessage = mutableStateOf<String?>(null)
        private set

    fun fetchCategorias() {
        viewModelScope.launch {
            try {
                Log.d("TOTEM", "Carregando as categorias")
                val fetchedCategorias = apiRepository.getCategoriasFromBackend()
                Log.d("TOTEM", "Categorias carregadas ")
                // categorias.value = fetchedCategorias
                categorias.clear()
                for( categoria in fetchedCategorias) {
                    Log.d("TOTEM", "Lista Add $categoria")
                    categorias.add(categoria)
                }
                Log.d("TOTEM", "Categorias carregadas, $categorias")
            } catch (e: Exception) {
                errorMessage.value = e.message
            }
        }
    }
}