package edu.curso.app6

import android.os.Bundle
import android.text.style.BackgroundColorSpan
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.Icon
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.NavigationBar
import androidx.compose.material3.NavigationBarItem
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.material3.TopAppBar
import androidx.compose.material3.TopAppBarColors
import androidx.compose.material3.TopAppBarDefaults
import androidx.compose.material3.contentColorFor
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.saveable.rememberSaveable
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.colorResource
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.navigation.NavController
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import edu.curso.app6.ui.theme.App6Theme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            App6Theme() {
                HomeTabScreen()
            }
        }
    }
}

@OptIn(ExperimentalMaterial3Api::class)
@Preview(showBackground = true)
@Composable
fun HomeTabScreen() {
    val navController = rememberNavController()
    val topBar = @Composable { TopAppBar (
        title = {Text("HomeScreen")},
        colors = TopAppBarDefaults.topAppBarColors(
            titleContentColor = Color.White,
            containerColor = Color.Blue),
        actions = {},
        modifier= Modifier
            .fillMaxWidth()
            .clip(
                RoundedCornerShape(15.dp)
            )
    ) }
    Box(
        modifier= Modifier
            .fillMaxSize()
            .background(Color.Black)
    ) {
        Scaffold(
            topBar = topBar,
            bottomBar = { BottomTabMain(navController)  }
        ) {
            Box(modifier = Modifier.padding(it)) {
                NavHost(navController=navController, startDestination = tab1List[0].route) {
                    composable(tab1List[0].route) {
                        HomeScreen(navController = navController)
                    }
                    composable(tab1List[1].route) {
                        ScreenA(navController = navController)
                    }
                    composable(tab1List[2].route) {
                        ScreenB(navController = navController)
                    }
                }

            }
        }
    }
}

@Composable
fun BottomTabMain(navController : NavController) {
    val selectedIndex = rememberSaveable{mutableStateOf(0)}
    NavigationBar(
        containerColor = Color.Black,
        contentColor = Color.White,
        modifier = Modifier
            .fillMaxWidth()
            .background(Color.Cyan)
    ) {
        tab1List.forEachIndexed { index, botDestinations ->
            val selected = selectedIndex.value == index
            NavigationBarItem(selected = selected,
                onClick = {
                    selectedIndex.value = index
                    navController.navigate(tab1List[index].route) {
                        //popUpTo(tab1List[0].route)
                        launchSingleTop = true
                    }
                },
                icon = {
                    Icon(
                        painter = painterResource(id = botDestinations.icon),
                        contentDescription = botDestinations.label
                    )
                },
                label= {Text(botDestinations.label)}
            )
        }
    }
}

@Composable
fun TotemNavigation() {
    val navController = rememberNavController()
    //NavHost( navController = navController,
    //    startDestination = Categoria.route)
}

@Composable
fun MainNavigation() {
    val navController = rememberNavController()
    NavHost(navController = navController,
        startDestination = Home.route) {
        composable(Home.route) {
            HomeScreen( navController )
        }
        composable(ScreenA.route) {
            ScreenA(navController)
        }
        composable(ScreenB.route) {
            ScreenB(navController)
        }

    }
}

@Composable
fun Greeting(name: String, modifier: Modifier = Modifier) {
    Text(
        text = "Hello $name!",
        modifier = modifier
    )
}

@Composable
fun Toggle() {
    var toggle by rememberSaveable { mutableStateOf(true) }
    var nome by rememberSaveable { mutableStateOf("") }
    if (toggle) {
        Text("Selecionado",
            modifier = Modifier.clickable { toggle = false })
    } else {
        Text("Não selecionado",
            modifier = Modifier.clickable { toggle = true })
    }
    Greeting(if (toggle) "Clicado" else "Não clidado")
    OutlinedTextField(value = nome, onValueChange = {nome = it},
        placeholder =  {
            Text("Nome Completo")
        })
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    App6Theme {
        Greeting("Android")
    }
}