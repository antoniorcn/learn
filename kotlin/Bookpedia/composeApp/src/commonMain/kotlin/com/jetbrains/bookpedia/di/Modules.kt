package com.jetbrains.bookpedia.di

import com.jetbrains.bookpedia.core.data.HttpClientFactory
import org.koin.core.module.Module
import org.koin.dsl.module
import org.koin.core.module.dsl.viewModelOf
import com.jetbrains.bookpedia.book.presentation.book_list.BookListViewModel

expect val platformModule: Module

val sharedModule = module {
    single { HttpClientFactory.create(get()) }
//    singleOf(::KtorRemoteBookDataSource).bind<RemoteBookDataSource>()
//    singleOf(::DefaultBookRepository).bind<BookRepository>()

//    single {
//        get<DatabaseFactory>().create()
//            .setDriver(BundledSQLiteDriver())
//            .build()
//    }
//    single { get<FavoriteBookDatabase>().favoriteBookDao }

    viewModelOf(::BookListViewModel)
    // viewModelOf(::BookDetailViewModel)
    // viewModelOf(::SelectedBookViewModel)
}