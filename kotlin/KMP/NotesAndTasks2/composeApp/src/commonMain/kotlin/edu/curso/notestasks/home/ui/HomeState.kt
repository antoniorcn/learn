package edu.curso.notestasks.home.ui

import edu.curso.notestasks.note.domain.NoteModel

data class HomeState (
    val noteList : List<NoteModel> = listOf(),
    val isLoading : Boolean = false,
    val isSuccess : Boolean = false,
    val isFailure : Boolean = false,
    val snackMessage : String? = null
) {
}