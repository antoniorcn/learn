package edu.curso.notestasks.home.di

import edu.curso.notestasks.note.data.NoteRepositoryImplementation
import edu.curso.notestasks.note.data.local.LocalDataSource
import edu.curso.notestasks.note.domain.NoteRepository

object NoteModule {
    val noteRepository : NoteRepository by lazy {
        NoteRepositoryImplementation( LocalDataSource() )
    }
}