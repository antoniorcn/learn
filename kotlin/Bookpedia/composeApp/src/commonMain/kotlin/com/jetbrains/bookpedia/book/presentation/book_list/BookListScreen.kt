package com.jetbrains.bookpedia.book.presentation.book_list

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.statusBarsPadding
import androidx.compose.foundation.layout.widthIn
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalSoftwareKeyboardController
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import com.jetbrains.bookpedia.book.domain.Book
import com.jetbrains.bookpedia.book.presentation.book_list.components.BookSearchBar
import org.koin.compose.viewmodel.koinViewModel


@Composable
fun BookListScreenRoot(
    viewModel : BookListViewModel,
    onBookClick : (Book) -> Unit
) {
    val state by viewModel.state.collectAsStateWithLifecycle()

    BookListScreen (
        state = state,
        onAction = { action ->
            when (action) {
                is BookListAction.OnBookClick -> onBookClick(action.book)
                else -> Unit
            }
            viewModel.onAction(action)
        }
    )
}

@Composable
fun BookListScreen(
    state: BookListState,
    onAction: (BookListAction) -> Unit,
    modifier: Modifier = Modifier,
) {
    val keyboardController = LocalSoftwareKeyboardController.current
  Column ( modifier = Modifier
      .fillMaxSize()
      .background(color= Color.DarkGray)
      .statusBarsPadding(),
      horizontalAlignment = Alignment.CenterHorizontally) {
      BookSearchBar(
          searchQuery = state.searchQuery,
          onSearchQueryChange = { it ->
              onAction(BookListAction.OnSearchQueryChange(it))
          },
          onImeSearch = {
              keyboardController?.hide()
          },
          modifier = Modifier
              .widthIn(400.dp)
              .fillMaxWidth()
              .padding(16.dp)


      )

  }
}