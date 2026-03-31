package edu.curso.notestasks.note.ui

import edu.curso.notestasks.note.domain.NoteModel

data class AddNoteState(
    val note : NoteModel = NoteModel.empty(),
    val isLoading : Boolean = false,
    val isSuccess : Boolean = false,
    val isFailure : Boolean = false,
)
