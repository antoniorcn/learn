package edu.curso.notestasks

import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
//import androidx.navigation.NavHostController
//import androidx.navigation.compose.NavHost
//import androidx.navigation.compose.composable
import cafe.adriel.voyager.navigator.Navigator
import edu.curso.notestasks.home.ui.HomeScreen
import edu.curso.notestasks.note.ui.AddNoteScreen
import org.jetbrains.compose.ui.tooling.preview.Preview

@Composable
@Preview
fun App() {
    MaterialTheme {
        Navigator(HomeScreen)

    }
}

//@Composable
//fun AppNavHost(navController: NavHostController) {
//    NavHost(navController = navController, startDestination = "firstScreen") {
//        composable("firstScreen") {
//            HomeScreen(onNavigate = {
//                navController.navigate("secondScreen")
//            })
//        }
//        composable("secondScreen") {
//            AddNoteScreen(onBack = {
//                navController.popBackStack()
//            })
//        }
//    }
//}