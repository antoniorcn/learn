package com.arcarini.casetool.dialog

import androidx.compose.foundation.layout.Box
import androidx.compose.material.Button
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.window.Dialog

@Composable
fun DialogExampleScreen(
    modifier : Modifier = Modifier
) {
    var showDialog by remember { mutableStateOf( false )}
    Box (modifier = modifier,
        contentAlignment = Alignment.Center)  {

        Button(onClick = { showDialog = true } ) {
            Text("Show Dialog")
        }
    }

    if (showDialog) {
        Dialog(onDismissRequest = { showDialog = false }) {
            Text("Conteudo do Dialog")
        }
    }
}