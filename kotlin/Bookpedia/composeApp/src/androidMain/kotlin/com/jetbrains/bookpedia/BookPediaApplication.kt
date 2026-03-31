package com.jetbrains.bookpedia

import android.app.Application
import org.koin.core.context.GlobalContext.startKoin
import com.jetbrains.bookpedia.book.presentation.book_list.BookListViewModel
import org.koin.core.module.dsl.viewModelOf
import org.koin.dsl.module

class BookPediaApplication : Application() {

    override fun onCreate() {
        super.onCreate()

        val appModule = module {
            viewModelOf(::BookListViewModel)
        }

        startKoin {
            modules(appModule)
        }
    }
}