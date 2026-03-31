package edu.curso.notestasks.note.domain

interface NoteRepository {

    suspend fun insertNote( noteModel: NoteModel) : Result<NoteModel>

    suspend fun updateNote( noteModel: NoteModel) : Result<NoteModel>

    suspend fun getById( id : String ): Result<NoteModel>

    suspend fun getAll() : Result<List<NoteModel>>

    suspend fun delete( id : String ) : Result<Unit>

}