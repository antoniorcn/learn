package com.jetbrains.bookpedia.book.presentation.book_list

import com.jetbrains.bookpedia.book.domain.Book
import com.jetbrains.bookpedia.core.presentation.UiText

data class BookListState(
    var searchQuery : String = "",
    var searchResults : List<Book> = emptyList(),
    var favoriteBooks : List<Book> = emptyList(),
    var isLoading : Boolean = false,
    var selectedTabIndex : Int = 0,
    var errorMessage : UiText? = null

    ) {
}