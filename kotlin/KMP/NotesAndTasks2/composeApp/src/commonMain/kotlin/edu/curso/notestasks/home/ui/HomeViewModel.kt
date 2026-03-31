package edu.curso.notestasks.home.ui

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import edu.curso.notestasks.note.domain.NoteRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch

class HomeViewModel( private val noteRepository: NoteRepository ) : ViewModel() {
    private val _state = MutableStateFlow(HomeState())
    val state = _state.asStateFlow()

    init {
        getAllNotes()
    }

    fun onEvent( event : HomeEvent){
        when( event ) {
            is HomeEvent.Reload -> getAllNotes( )
        }
    }

    private fun getAllNotes() {
        if (_state.value.isLoading) return
        println( "Recarregando a lista")
        _state.update {
            it.copy(isLoading = true)
        }

        viewModelScope.launch {
            noteRepository.getAll()
                .onSuccess { noteList ->
                    _state.update {
                        it.copy(noteList = noteList,
                            isLoading = false,
                            isSuccess = true,
                            isFailure = false,
                            snackMessage = "Foram carregadas ${noteList.size} notas")
                    }
                }
                .onFailure {
                    _state.update {
                        it.copy(noteList = listOf(),
                            isLoading = false,
                            isSuccess = false,
                            isFailure = true,
                            snackMessage = "Erro ao carregar as notas")
                    }
                }
        }
    }
}