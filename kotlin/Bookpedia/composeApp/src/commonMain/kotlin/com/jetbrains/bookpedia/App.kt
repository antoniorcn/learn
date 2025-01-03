package com.jetbrains.bookpedia

import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.*
import com.jetbrains.bookpedia.book.presentation.book_list.BookListScreenRoot
import com.jetbrains.bookpedia.book.presentation.book_list.BookListViewModel
import org.jetbrains.compose.ui.tooling.preview.Preview

@Composable
@Preview
fun App() {
    MaterialTheme {
        BookListScreenRoot(
            viewModel = remember { BookListViewModel() },
            onBookClick = {

            }
        )
    }
}