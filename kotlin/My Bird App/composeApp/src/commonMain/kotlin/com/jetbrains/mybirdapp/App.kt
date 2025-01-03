package com.jetbrains.mybirdapp

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material.Button
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import org.jetbrains.compose.ui.tooling.preview.Preview
import org.koin.compose.KoinContext
import org.koin.compose.koinInject
import com.jetbrains.mybirdapp.shared.EmailClient
import com.jetbrains.mybirdapp.ui.PokeListComposable
import com.jetbrains.mybirdapp.viewmodel.PokemonViewModel


@Composable
@Preview
fun App() {
    MaterialTheme {
        KoinContext {
            val viewModel = viewModel<PokemonViewModel>()
            val emailClient = koinInject<EmailClient>()
            var showContent by remember { mutableStateOf(false) }
            var status by remember { mutableStateOf("")}
            val navController = rememberNavController()
            Column(Modifier.fillMaxWidth(), horizontalAlignment = Alignment.CenterHorizontally) {
                Row {
                    Button(onClick = { showContent = !showContent }) {
                        Text("Click me!")
                    }
                    Button(onClick = {
                         emailClient.open("Teste Email", "teste@teste.com") {
                             status = "Email Enviado"
                         }
                    }) {
                        Text( "Send Email")
                    }
                    Text("Current Status: $status")
                }

                NavHost(
                    navController = navController,
                    modifier = Modifier.border(3.dp, MaterialTheme.colors.primary),
                    startDestination = "PokemonList"
                ) {
                    composable("PokemonList") {
                        PokeListComposable(viewModel)
                    }
                }
            }
        }
    }
}