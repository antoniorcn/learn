package com.jetbrains.mybirdapp.ui

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.wrapContentHeight
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.material.CircularProgressIndicator
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import com.jetbrains.mybirdapp.viewmodel.PokemonViewModel

@Composable
fun PokeListComposable(viewModel : PokemonViewModel) {

    if (viewModel.loading.value) {
        Column(
            modifier = Modifier.fillMaxSize(),
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.Center
        ) {
            CircularProgressIndicator()
        }
    } else if (viewModel.error.value.isNotEmpty()) {
        Column(
            modifier = Modifier.fillMaxSize(),
            horizontalAlignment = Alignment.CenterHorizontally,
            verticalArrangement = Arrangement.Center
        ) {
            Text(text = viewModel.error.value)
        }
    } else {
        LazyColumn(modifier = Modifier.fillMaxSize()) {
            items(viewModel.lista.size) {
                Row(
                    modifier = Modifier.fillMaxWidth().wrapContentHeight().padding(20.dp),
                    horizontalArrangement = Arrangement.Center, verticalAlignment = Alignment.Top
                ) {
                    Text(text = viewModel.lista[it].name)
                }
            }
        }
    }
}