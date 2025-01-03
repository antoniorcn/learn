package com.jetbrains.bookpedia

import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.tooling.preview.Preview
import com.jetbrains.bookpedia.book.presentation.book_list.BookListScreenRoot
import com.jetbrains.bookpedia.book.presentation.book_list.BookListViewModel

@Preview(showBackground = true)
@Composable
fun AppPreview() {
    BookListScreenRoot(
        viewModel = remember { BookListViewModel() },
        onBookClick = {

        }
    )
}