package edu.curso.agendacontato

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Button
import androidx.compose.material.OutlinedTextField
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp

class ContatoView(private val viewModel: AgendaContatoViewModel) {
    private val platform = getPlatform()

    @Composable
    fun Formulario(){
        Column() {
            Text("Formulario de Contato")
            OutlinedTextField(value = viewModel.nome.value, onValueChange = { viewModel.nome.value = it})
            OutlinedTextField(value = viewModel.telefone.value, onValueChange = { viewModel.telefone.value = it})
            OutlinedTextField(value = viewModel.email.value, onValueChange = { viewModel.email.value = it})
            Button( onClick = {viewModel.adicionar()} ) {
                Text("Gravar")
            }
            Button( onClick = {viewModel.navigate("LIST")} ) {
                Text("Listagem")
                viewModel.lerTodos()
            }
        }
    }

    @Composable
    fun Listagem() {
        Column {
            Button( onClick = {viewModel.navigate("FORM")} ) {
                Text("Formulario")
            }
            LazyColumn {
                items(viewModel.lista) {
                    Column(
                        modifier = Modifier.padding(16.dp)
                            .border(2.dp, Color.Red, shape = RoundedCornerShape(20.dp))
                    ) {
                        Text(it.nome)
                        Text(it.email)
                        Text(it.telefone)
                    }
                }
            }
        }
    }
}