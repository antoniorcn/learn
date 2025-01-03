package edu.curso.approomdb1

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.activity.viewModels
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Button
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.lifecycle.lifecycleScope
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.sp
import edu.curso.approomdb1.db.AgendaDatabase
import edu.curso.approomdb1.db.ContatoDAO
import edu.curso.approomdb1.ui.theme.AppRoomDB1Theme
import edu.curso.approomdb1.viewmodel.ContatoViewModel

class MainActivity : ComponentActivity() {
    private val viewModel by viewModels<ContatoViewModel>()
    private val contatoDao : ContatoDAO = AgendaDatabase.getInstance(application).contatoDAO
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        viewModel.populate( contatoDao )
        enableEdgeToEdge()
        setContent {
            AppRoomDB1Theme {
                Scaffold(modifier = Modifier.fillMaxSize()) { innerPadding ->
                    Formulario(viewModel, modifier=Modifier.padding(innerPadding))
                }
            }
        }
    }
}

@Composable
fun Formulario(viewModel : ContatoViewModel, modifier: Modifier = Modifier) {
    Box(modifier = modifier) {
        Column(modifier = Modifier.fillMaxWidth().fillMaxHeight(0.5f)) {
            Text("Agenda de Contatos", fontSize = 48.sp, modifier = Modifier.fillMaxWidth())
            Row(modifier = Modifier.fillMaxWidth()) {
                Text(text = "Nome: ")
                OutlinedTextField(value = viewModel.nome, onValueChange = { viewModel.nome = it })
            }
            Row(modifier = Modifier.fillMaxWidth()) {
                Text(text = "Email: ")
                OutlinedTextField(value = viewModel.email, onValueChange = { viewModel.email = it })
            }
            Row(modifier = Modifier.fillMaxWidth()) {
                Text(text = "Telefone: ")
                OutlinedTextField(value = viewModel.telefone, onValueChange = { viewModel.telefone = it })
            }
            Button(onClick = { viewModel.gravar() } ) {
                Text("Gravar")
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    AppRoomDB1Theme {
        Greeting("Android")
    }
}