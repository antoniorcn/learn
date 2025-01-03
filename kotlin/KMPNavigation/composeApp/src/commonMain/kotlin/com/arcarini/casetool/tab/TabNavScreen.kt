package com.arcarini.casetool.tab

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material.Tab
import androidx.compose.material.TabRow
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import org.jetbrains.compose.ui.tooling.preview.Preview

@Composable
fun TabNavScreen(modifier : Modifier = Modifier, startTab : Int = 0) {
    var tabIndex by remember { mutableStateOf( startTab )}
    val tabTitles = listOf( "Tab 1", "Tab 2", "Tab 3")
    Column(
        modifier = modifier.fillMaxSize()
    ) {
        TabRow( selectedTabIndex =  tabIndex ) {
            tabTitles.forEachIndexed { index, s ->
                Tab(
                    selected = index == tabIndex,
                    text = { Text(s) },
                    onClick = { tabIndex = index }

                )
            }
        }

        when (tabIndex) {
            0 -> Text("Conteudo para a aba 1", modifier=Modifier.padding(16.dp))
            1 -> Text("Conteudo para a aba 2", modifier=Modifier.padding(16.dp))
            2 -> Text("Conteudo para a aba 3", modifier=Modifier.padding(16.dp))
        }
    }
}

@Preview
@Composable
fun TabNavScreenPreview() {
    TabNavScreen()
}