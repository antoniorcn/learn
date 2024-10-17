package edu.curso.app6

import androidx.compose.foundation.layout.Column
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.navigation.NavController

@Composable
fun GrupoProdutosScreen(navController : NavController) {
    Column() {
        Button(onClick = { navController.navigate(Produto.route) } ) {
            Text("Hamburgueres")
        }
        Button(onClick = { navController.navigate(Produto.route) } ) {
            Text("Beirutes")
        }
        Button(onClick = { navController.navigate(Produto.route) } ) {
            Text("Outros Lanches")
        }
    }
}