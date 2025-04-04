package edu.curso.notestasks.note.data.local

import edu.curso.notestasks.note.domain.NoteModel

class LocalDataSource {

    val noteList = mutableListOf<NoteDto>()

    suspend fun insertNote( noteDto: NoteDto) : NoteDto {
        noteList.add(noteDto)
        return noteDto
    }

    suspend fun updateNote( noteDto: NoteDto) : NoteDto {
        val index = noteList.indexOfFirst { it.id == noteDto.id }
        noteList[index] = noteDto
        return noteDto
    }

    suspend fun getById( id : String ): NoteDto {
        return noteList.first { it.id == id }
    }

    suspend fun getAll() : List<NoteDto> {
        return noteList
    }

    suspend fun delete( id : String ) {
        noteList.removeAll { it.id == id }
    }
}