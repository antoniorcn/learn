package edu.curso.notestasks.home.ui

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.safeDrawingPadding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.rounded.Add
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.Scaffold
import androidx.compose.material3.SnackbarHost
import androidx.compose.material3.SnackbarHostState
import androidx.compose.material3.Text
import androidx.compose.material3.TopAppBar
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import cafe.adriel.voyager.core.model.rememberScreenModel
import cafe.adriel.voyager.core.screen.Screen
import cafe.adriel.voyager.navigator.LocalNavigator
import cafe.adriel.voyager.navigator.currentOrThrow
import edu.curso.notestasks.home.di.NoteModule
import edu.curso.notestasks.note.ui.AddNoteScreen

object HomeScreen : Screen {

    @OptIn(ExperimentalMaterial3Api::class)
    @Composable
    override fun Content() {
        val navigator = LocalNavigator.currentOrThrow
        val snackBarHostState = SnackbarHostState()
        val viewModel = rememberScreenModel { HomeViewModel( NoteModule.noteRepository ) }
        val state by viewModel.state.collectAsState()
        Scaffold (
            topBar =  {
                TopAppBar(
                    title= { Text("Notes App") },
                    actions = {
                        IconButton( onClick = {
                            navigator.push(AddNoteScreen)
                        }) {
                            Icon(Icons.Rounded.Add,
                                contentDescription = "Add Note")
                        }
                    })
            },
            snackbarHost = {
                SnackbarHost( snackBarHostState )
            },
            modifier = Modifier
                .fillMaxSize()
                .safeDrawingPadding()
        ) {
            LazyColumn {
                items(state.noteList) {
                    Column() {
                        Text(  "(${it.id}) - ${it.title}")
                        Text( it.description )
                    }
                }
            }
        }
    }

}