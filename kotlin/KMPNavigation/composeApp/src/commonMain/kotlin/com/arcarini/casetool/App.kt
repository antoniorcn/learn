package com.arcarini.casetool

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Modifier
import androidx.navigation.compose.rememberNavController
import com.arcarini.casetool.arguments.ArgumentExampleScreen
import com.arcarini.casetool.dialog.DialogExampleScreen
import com.arcarini.casetool.tab.TabNavScreen
import org.jetbrains.compose.ui.tooling.preview.Preview

@Composable
@Preview
fun App() {
    val navHostController = rememberNavController()
    val scope = rememberCoroutineScope()
    MaterialTheme {
        Column(modifier=Modifier.fillMaxSize()) {
            // DialogExampleScreen()
            // TabNavScreen()
            ArgumentExampleScreen(modifier=Modifier.fillMaxSize(), navHostController)
        }
    }
}