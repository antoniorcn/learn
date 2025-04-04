package edu.curso.agendacontato

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.activity.viewModels
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Button
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import androidx.navigation.compose.rememberNavController
import edu.curso.agendacontato.ui.theme.AgendaContatoTheme

class MainActivity : ComponentActivity() {
    private val contatoViewModel : ContatoViewModel by viewModels()
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()

        setContent {
            val navController = rememberNavController()
            AgendaContatoTheme {
                Scaffold(modifier = Modifier.fillMaxSize()) { innerPadding ->
                    NavigationComposable(modifier = Modifier.padding(innerPadding),
                        navController,
                        contatoViewModel)
                }
            }
        }
    }
}



//@Preview(showBackground = true)
//@Composable
//fun ContatoPreview() {
//    ContatoFormulario(onGravar = { n, t, e -> },
//        onPesquisar = { nome ->
//            return Contato("", "", "")
//        })
//}
