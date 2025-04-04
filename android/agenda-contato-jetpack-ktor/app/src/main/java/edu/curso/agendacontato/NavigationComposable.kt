package edu.curso.agendacontato

import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.navigation.NavHostController
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable


@Composable
fun NavigationComposable(
    modifier : Modifier = Modifier,
    navController: NavHostController,
    viewModel : ContatoViewModel
) {

    NavHost( navController = navController,
        startDestination =  FormDestination
    ) {
        composable<FormDestination>{ ContatoFormulario(navController = navController, viewModel = viewModel) }
        composable<ListDestination> { ContatoListView(navController = navController, viewModel = viewModel) }
    }
}