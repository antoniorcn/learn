package edu.curso.notestasks

import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.NavHostController
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import edu.curso.notestasks.home.di.NoteModule
import edu.curso.notestasks.home.ui.HomeScreen
import edu.curso.notestasks.home.ui.HomeViewModel
import edu.curso.notestasks.note.ui.AddNoteScreen
import org.jetbrains.compose.ui.tooling.preview.Preview

@Composable
@Preview
fun App() {
    MaterialTheme {
        val navController = rememberNavController()
        AppNavHost(navController)
    }
}

@Composable
fun AppNavHost(navController: NavHostController) {
    NavHost(navController = navController, startDestination = "firstScreen") {
        composable("firstScreen") {
            HomeScreen(onNavigate = {
                println("Navegando para a tela AddNote")
                navController.navigate("secondScreen")
            })
        }
        composable("secondScreen") {
            AddNoteScreen(onBack = {
                println("Navegando para a tela Home")
                navController.popBackStack()
            })
        }
    }
}