package edu.curso.app6

import androidx.compose.foundation.layout.Column
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.navigation.NavController

@Composable
fun ProdutosScreen(navController : NavController) {
    Column() {
        Button(onClick = { navController.navigate(Detalhes.route) } ) {
            Text("X Salada")
        }
        Button(onClick = { navController.navigate(Detalhes.route) } ) {
            Text("X Bacon")
        }
        Button(onClick = { navController.navigate(Detalhes.route) } ) {
            Text("Misto Quente")
        }
    }
}