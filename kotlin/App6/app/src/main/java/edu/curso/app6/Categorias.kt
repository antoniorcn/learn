package edu.curso.app6

import androidx.compose.foundation.layout.Column
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.navigation.NavController

@Composable
fun CategoriasScreen(navController : NavController) {
    Column() {
        Button(onClick = { navController.navigate(GrupoProdutos.route) } ) {
            Text("Sanduiches")
        }
        Button(onClick = { navController.navigate(GrupoProdutos.route) } ) {
            Text("Bebidas")
        }
        Button(onClick = { navController.navigate(GrupoProdutos.route) } ) {
            Text("Complementos")
        }
    }
}