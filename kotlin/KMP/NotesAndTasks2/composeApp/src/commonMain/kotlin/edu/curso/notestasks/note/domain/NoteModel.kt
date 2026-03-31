package edu.curso.notestasks.note.domain

data class NoteModel (val id : String,
    val title : String,
    val description : String ) {
    companion object {
        fun empty() : NoteModel {
            return NoteModel ("", "" ,"")
        }
    }
}