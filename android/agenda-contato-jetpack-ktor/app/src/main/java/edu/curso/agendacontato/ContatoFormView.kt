package edu.curso.agendacontato

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Button
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.navigation.NavHostController

@Composable
fun ContatoFormulario(
    modifier: Modifier = Modifier,
    navController: NavHostController,
    viewModel : ContatoViewModel
) {



    Column (modifier = modifier) {
        Text( text="Nome Completo:",
            modifier = Modifier
                .padding(5.dp)
                .background(Color.White)
        )
        OutlinedTextField(
            value = viewModel.nome.value,
            onValueChange = { viewModel.nome.value = it }
        )
        Text( text="Email:",
            modifier = Modifier
                .padding(5.dp)
                .background(Color.White)
        )
        OutlinedTextField(
            value = viewModel.email.value,
            onValueChange = { viewModel.email.value = it }
        )
        Text( text="Telefone:",
            modifier = Modifier
                .padding(5.dp)
                .background(Color.White)
        )
        OutlinedTextField(
            value = viewModel.telefone.value,
            onValueChange = { viewModel.telefone.value = it }
        )
        Row {
            Button(
                onClick = {
                    viewModel.adicionar()
                }
            ) {
                Text("Gravar")
            }
            Button(
                onClick = {
                    viewModel.procurar()
                }
            ) {
                Text("Pesquisar")
            }
        }
        Button( onClick = {
            navController.navigate(ListDestination)
        } ) {
            Text("Ver a Lista")
        }
    }
}