package com.arcarini.casetool.arguments

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.material.Button
import androidx.compose.material.OutlinedTextField
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp

@Composable
fun InputScreen(
    modifier : Modifier = Modifier,
    onClick : (String) -> Unit
) {
    var name by remember { mutableStateOf("") }
    Column () {
        Text("Entre com seu nome e tecle submit")
        Spacer(modifier = Modifier.height(20.dp))
        OutlinedTextField(value = name, onValueChange = { name = it },
            modifier=Modifier.fillMaxWidth())
        Spacer(modifier = Modifier.height(20.dp))
        Button(onClick={
            onClick(name)
        }) {
            Text("Submit")
        }
    }
}