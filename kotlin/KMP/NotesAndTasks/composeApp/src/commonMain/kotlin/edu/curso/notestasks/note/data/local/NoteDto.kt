package edu.curso.notestasks.note.data.local

import edu.curso.notestasks.note.domain.NoteModel

data class NoteDto(
    val id : String,
    val title : String,
    val description : String
) {
    fun toModel() : NoteModel = NoteModel(this.id, this.title, this.description)

    companion object {
        fun fromModel( note : NoteModel) : NoteDto = NoteDto(note.id, note.title, note.description)
    }

}
