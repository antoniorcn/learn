package edu.curso.notestasks.note.data

import edu.curso.notestasks.note.data.local.LocalDataSource
import edu.curso.notestasks.note.data.local.NoteDto
import edu.curso.notestasks.note.domain.NoteModel
import edu.curso.notestasks.note.domain.NoteRepository

class NoteRepositoryImplementation(
    val local : LocalDataSource
)  : NoteRepository{



    override suspend fun insertNote(noteModel: NoteModel): Result<NoteModel> {
        return kotlin.runCatching {
            local.insertNote(NoteDto.fromModel(noteModel)).toModel()
        }
    }

    override suspend fun updateNote(noteModel: NoteModel): Result<NoteModel> {
        return kotlin.runCatching {
            local.updateNote(NoteDto.fromModel(noteModel)).toModel()
        }
    }

    override suspend fun getById(id: String): Result<NoteModel> {
        return kotlin.runCatching {
            local.getById(id).toModel()
        }
    }

    override suspend fun getAll(): Result<List<NoteModel>> {
        return kotlin.runCatching {
            local.getAll().map { it.toModel() }
        }
    }

    override suspend fun delete(id : String): Result<Unit> {
        return kotlin.runCatching {
            local.delete(id)
        }
    }
}