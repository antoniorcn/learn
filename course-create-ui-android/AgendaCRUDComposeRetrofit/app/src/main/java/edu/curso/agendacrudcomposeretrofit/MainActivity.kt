package edu.curso.agendacrudcomposeretrofit

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.viewModels
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material3.Button
import androidx.compose.material3.Card
import androidx.compose.material3.CardDefaults
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.modifier.modifierLocalConsumer
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.lifecycle.ViewModel
import edu.curso.agendacrudcomposeretrofit.ui.theme.AgendaCRUDComposeRetrofitTheme

class MainActivity : ComponentActivity() {
    private val viewModel by viewModels<ContatoViewModel>()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        viewModel.getContatos()
        setContent {
            AgendaCRUDComposeRetrofitTheme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    Box (
                        modifier = Modifier.fillMaxSize()
                    ) {
                        ScreenCRUD(viewModel._listaContatos, viewModel)
                    }
                }
            }
        }
    }
}

@Composable
fun ScreenCRUD(listaContatos: ArrayList<Contato>, viewModel: ContatoViewModel) {
    var id by remember { mutableStateOf(null)}
    var nome by remember { mutableStateOf("")}
    var telefone by remember { mutableStateOf("")}
    var email by remember { mutableStateOf("")}

    Column (
        modifier = Modifier
            .fillMaxWidth()
            .fillMaxHeight()
            .padding(12.dp)
    ) {
        Column (
            modifier = Modifier
                .fillMaxWidth()
                .fillMaxHeight()
        ) {
            Formulario(
                idContato = id,
                nome = nome,
                setNome = {nome = it},
                telefone = telefone,
                setTelefone = {telefone = it},
                email = email,
                setEmail = {email = it},
                viewModel = viewModel
            )
            Column (modifier = Modifier.fillMaxWidth()){
                LazyColumn(contentPadding = PaddingValues(horizontal = 16.dp, vertical = 8.dp)
                ) {
                    items(listaContatos) {
                        contato -> 
                        CardContato (
                            contato = contato
                        )
                    }
                }
            }
        }
    }
}

@Composable
fun CardContato(contato: Contato) {
    Card (modifier = Modifier
        .fillMaxWidth()
        .padding(8.dp),
        elevation = CardDefaults.cardElevation(8.dp)
    ) {
        Column(
            modifier = Modifier
                .fillMaxSize()
                .padding(20.dp),
            verticalArrangement = Arrangement.Center,
            horizontalAlignment = Alignment.CenterHorizontally
        ) {
            Text(text = "Nome: ${contato.nome}",
                modifier = Modifier
                .align(Alignment.CenterHorizontally))
            Text(text = "Telefone: ${contato.telefone}",
                modifier = Modifier
                    .align(Alignment.CenterHorizontally))
            Text(text = "Email: ${contato.email}",
                modifier = Modifier
                    .align(Alignment.CenterHorizontally))
        }
    }
}

@Composable
fun Formulario(idContato : String?,
               nome : String,
               setNome : (String) -> Unit,
               telefone: String,
               setTelefone : (String) -> Unit,
               email : String,
               setEmail : (String) -> Unit,
               viewModel : ContatoViewModel
               ) {
    OutlinedTextField(
        modifier = Modifier.fillMaxWidth(),
        value = nome,
        onValueChange = { setNome(it) },
        singleLine = true,
        maxLines = 1,
        label = { Text("Nome: ") }
    )
    OutlinedTextField(
        modifier = Modifier.fillMaxWidth(),
        value = telefone,
        onValueChange = { setTelefone(it) },
        singleLine = true,
        maxLines = 1,
        label = { Text("Telefone: ") }
    )
    OutlinedTextField(
        modifier = Modifier.fillMaxWidth(),
        value = email,
        onValueChange = { setEmail(it) },
        singleLine = true,
        maxLines = 1,
        label = { Text("Email: ") }
    )
    Button(onClick = {
        viewModel.addContato(
            Contato(null, nome, telefone, email)
        )
    }) {
        Text("Salvar")

    }
}
