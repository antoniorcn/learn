package edu.curso.notestasks.note.ui

import cafe.adriel.voyager.core.model.ScreenModel
import cafe.adriel.voyager.core.model.screenModelScope
import edu.curso.notestasks.note.domain.NoteModel
import edu.curso.notestasks.note.domain.NoteRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch

class AddNoteViewModel(
    private val noteRepository: NoteRepository
): ScreenModel {

    private val _state = MutableStateFlow(AddNoteState())
    val state = _state.asStateFlow()

    fun onEvent( event : AddNoteEvent ){
        when( event ) {
            is AddNoteEvent.AddNote -> addNote( event )
        }
    }

    fun addNote(event: AddNoteEvent.AddNote) {
        if (state.value.isLoading) return
        _state.update {
            it.copy(isLoading = true)
        }

        screenModelScope.launch {
            noteRepository.insertNote( event.note )
                .onSuccess {
                    _state.update {
                        it.copy(note = NoteModel.empty(), isSuccess = true, isLoading = false, isFailure = false)
                    }
                }
                .onFailure {
                    _state.update {
                        it.copy(isFailure = true, isLoading = false, isSuccess = false)
                    }
                }
        }
    }

}