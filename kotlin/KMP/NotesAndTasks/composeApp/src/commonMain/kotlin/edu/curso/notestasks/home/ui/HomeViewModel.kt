package edu.curso.notestasks.home.ui

import cafe.adriel.voyager.core.model.ScreenModel
import cafe.adriel.voyager.core.model.screenModelScope
import edu.curso.notestasks.note.domain.NoteRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch

class HomeViewModel( val noteRepository: NoteRepository ) : ScreenModel {
    private val _state = MutableStateFlow(HomeState())
    val state = _state.asStateFlow()

    init {
        getAllNotes()
    }

    private fun getAllNotes() {
        if (_state.value.isLoading) return

        _state.update {
            it.copy(isLoading = true)
        }

        screenModelScope.launch {
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