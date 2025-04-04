package edu.curso.notestasks.note.ui

import edu.curso.notestasks.note.domain.NoteModel

sealed interface AddNoteEvent {
    data class AddNote(val note : NoteModel) : AddNoteEvent
}