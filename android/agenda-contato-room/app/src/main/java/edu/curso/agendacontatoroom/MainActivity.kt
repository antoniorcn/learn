package edu.curso.agendacontatoroom

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.activity.viewModels
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Button
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.room.Room
import edu.curso.agendacontatoroom.ui.theme.AgendaContatoRoomTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        val contatoViewModel by viewModels<AgendaContatoViewModel>()
        setContent {
            AgendaContatoRoomTheme {
                Scaffold(modifier = Modifier.fillMaxSize()) { innerPadding ->
                    AgendaFormulario(contatoViewModel,
                        modifier = Modifier.padding(innerPadding)
                    )
                }
            }
        }
    }
}

@Composable
fun AgendaFormulario(model : AgendaContatoViewModel, modifier: Modifier = Modifier) {
    Column(
        modifier = modifier.fillMaxSize()
    ) {
        Column(modifier = modifier
            .fillMaxHeight(0.5f)
            .fillMaxWidth()
        ) {
            OutlinedTextField(
                value = model.nome.value, onValueChange = { model.nome.value = it },
                placeholder = { Text("Nome Completo:") }, label = { Text("Nome") })
            OutlinedTextField(
                value = model.telefone.value,
                onValueChange = { model.telefone.value = it },
                placeholder = { Text("Telefone com DDD:") },
                label = { Text("Telefone") })
            OutlinedTextField(
                value = model.email.value, onValueChange = { model.email.value = it },
                placeholder = { Text("Email Válido:") }, label = { Text("Email") })
            Button(onClick = { model.adicionar() }) {
                Text("Gravar")
            }
        }
        Column (
            modifier = Modifier
                .fillMaxHeight(0.5f)
                .fillMaxWidth()
                .background(color = Color.Yellow)
        ) {
            Button( onClick = {model.lerTodos()} ) {
                Text("Carregar")
            }
            LazyColumn {
                items(model.lista.value) {
                    Column(
                        modifier = Modifier.border(2.dp, Color.Red, RoundedCornerShape(16.dp) )
                    ) {
                        Text("Nome: ${it.nome}")
                        Text("Telefone: ${it.telefone}")
                        Text("Email: ${it.email}")
                        Button( onClick = { model.remover(it) }) {
                            Text("Delete")
                        }
                    }
                }
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    AgendaContatoRoomTheme {
    }
}