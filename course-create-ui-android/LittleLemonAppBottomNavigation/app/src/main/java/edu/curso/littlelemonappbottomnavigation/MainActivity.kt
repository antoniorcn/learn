package edu.curso.littlelemonappbottomnavigation

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Icon
import androidx.compose.material3.NavigationBar
import androidx.compose.material3.NavigationBarItem
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.saveable.rememberSaveable
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.navigation.NavController
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            MyApp()
        }
    }
}

@Composable
fun MyApp() { 
    val navController = rememberNavController()
    Scaffold (
        bottomBar = {MyBottomNavigation(navController = navController)},

    ) {
        Box(
            modifier = Modifier.padding(it))
        {
            NavHost(
                navController=navController,
                startDestination = destinationHome.route) {
                composable(destinationHome.route) {
                    HomeScreen()
                }
                composable(destinationMenu.route) {
                    MenuScreen()
                }
                composable(destinationLocation.route) {
                    LocationScreen()
                }
            }
        }
    }

}

@Composable
fun MyBottomNavigation( navController : NavController) {
    val destinations = arrayListOf(destinationMenu, destinationHome, destinationLocation)
    var selectedIndex by rememberSaveable { mutableIntStateOf(1) }

    NavigationBar {
        destinations.forEachIndexed { index, destination ->
            NavigationBarItem(
                selected = (index == selectedIndex) ,
                onClick = {
                            selectedIndex = index
                            navController.navigate(destination.route) {
                                popUpTo(destinationHome.route)
                                launchSingleTop = true
                            }
                          },
                icon = {
                        Icon(painter = painterResource(destination.icon),
                                contentDescription = destination.title)
                },
                label = {Text(destination.title)}
            )
        }
    }
}


@Composable
@Preview
fun MyAppPreview() {
    MyApp()
}