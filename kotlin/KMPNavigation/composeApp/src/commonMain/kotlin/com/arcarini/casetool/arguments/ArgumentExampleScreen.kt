package com.arcarini.casetool.arguments

import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.navigation.NavGraphBuilder
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.NavHostController
import androidx.navigation.NavType
import androidx.navigation.navArgument


sealed class ArgumentScreen(var route : String) {
    data object Input : ArgumentScreen("input")
    data object Output : ArgumentScreen("output/{name}") {
        fun getRoute(name : String) = "output/$name"
    }
}

@Composable
fun ArgumentExampleScreen(
    modifier : Modifier = Modifier,
    navHostController : NavHostController
) {
    NavHost(navController = navHostController, startDestination = ArgumentScreen.Input.route) {
        addInputScreen(modifier, navHostController)
        addOutputScreen(modifier, navHostController)
    }
}

private fun NavGraphBuilder.addInputScreen(
    modifier : Modifier = Modifier,
    navController : NavHostController
) {
    composable(
        ArgumentScreen.Input.route
    ) {
        InputScreen(modifier) {
            navController.navigate( ArgumentScreen.Output.getRoute(
                if (it.isEmpty()) "John Doe" else it
            ))
        }
    }
}

private fun NavGraphBuilder.addOutputScreen(
    modifier : Modifier = Modifier,
    navController : NavHostController
) {
    composable(ArgumentScreen.Output.route, arguments = listOf(
        navArgument("name") {type = NavType.StringType})) { backStackEntry ->
        val name = backStackEntry.arguments?.getString("name") ?: "John Doe"
        OutputScreen(name = name) {
            navController.popBackStack()
        }
    }
}