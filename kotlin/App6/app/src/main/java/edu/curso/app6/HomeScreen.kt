package edu.curso.app6

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.Button
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.sp
import androidx.navigation.NavHostController


@Composable
fun HomeScreen(navController : NavHostController) {
    Column (
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally,
        modifier= Modifier.background(Color.Yellow)
            .fillMaxSize()
    ) {
        Text("Home Screen", fontSize = 32.sp)
        Button(onClick={navController.navigate(ScreenA.route)}) {
            Text("Tela A")
        }
        Button(onClick={navController.navigate(ScreenB.route)}) {
            Text("Tela B")
        }
    }
}