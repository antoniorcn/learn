package edu.curso.agendacontato

import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Button
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.MutableState
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import kotlinx.coroutines.launch
import org.jetbrains.compose.ui.tooling.preview.Preview

@Composable
@Preview
fun App() {
    // val viewModel = viewModel { AgendaContatoViewModel() }
    // val contatoView = ContatoView(viewModel)

    MaterialTheme {
        val httpClient = createHttpClient()
        val api = ContatoApi(httpClient)
        val scope = rememberCoroutineScope()
        val lista : MutableState<List<Contato>> = mutableStateOf(listOf())



        Column(Modifier.fillMaxWidth(), horizontalAlignment = Alignment.CenterHorizontally) {
            // viewModel.lerTodos()
            // if (viewModel.tela.value == "FORM") contatoView.Formulario() else contatoView.Listagem()
            Button ( onClick = {
                scope.launch {
                    lista.value = api.getAll()
                }
            }) {
                Text("Carregar")
            }
            Listagem( lista )
        }
    }
}


@Composable
fun Listagem(lista: MutableState<List<Contato>>) {
    Column {
        LazyColumn {
            items(lista.value) {
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
