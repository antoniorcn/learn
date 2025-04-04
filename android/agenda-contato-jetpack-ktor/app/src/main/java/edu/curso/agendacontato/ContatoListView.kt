package edu.curso.agendacontato

import androidx.compose.foundation.layout.Column
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.navigation.NavHostController

@Composable
fun ContatoListView(navController: NavHostController, viewModel : ContatoViewModel) {
    Column {
        for (item in viewModel.lista) {
            ContatoItem( item )
        }
        Button( onClick = {
            navController.navigate(FormDestination)
        } ) {
            Text("Ver o Formulario")
        }
    }
}

@Composable
fun ContatoItem(item: Contato) {
    Text(item.nome)
}
