package com.jetbrains.bookpedia

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import com.jetbrains.bookpedia.book.presentation.book_list.components.BookSearchBar


@Preview(showBackground = true)
@Composable
fun previewBookSearchBar() {
    Box(modifier = Modifier
        .fillMaxWidth()
        .background(color = Color.White)
    ) {
        BookSearchBar(
            "",
            { println("BookSearch invocado: $it") },
            { println("IME Search invocado") },
            modifier = Modifier.fillMaxWidth()
        )
    }
}

