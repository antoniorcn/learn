package edu.curso.notestasks.note.data.local

class LocalDataSource {

    val noteList = mutableListOf<NoteDto>(
        NoteDto("", "Teste1", "Teste 1"),
        NoteDto("", "Teste2", "Teste 2")
    )

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