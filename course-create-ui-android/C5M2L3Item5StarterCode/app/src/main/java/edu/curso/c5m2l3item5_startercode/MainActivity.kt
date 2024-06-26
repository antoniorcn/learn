package edu.curso.c5m2l3item5_startercode

import android.content.res.Configuration.ORIENTATION_LANDSCAPE
import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material.DrawerValue
import androidx.compose.material.Scaffold
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.material.TopAppBar
import androidx.compose.material.rememberDrawerState
import androidx.compose.material.rememberScaffoldState
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalConfiguration
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import edu.curso.c5m2l3item5_startercode.ui.theme.Pink80
import edu.curso.c5m2l3item5_startercode.ui.theme.Purple80
import edu.curso.c5m2l3item5_startercode.ui.theme.PurpleGrey80

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            val materialBlue700 = Color(0xFF1976D2)
            val scaffoldState = rememberScaffoldState(rememberDrawerState(DrawerValue.Open))
            Scaffold(
                scaffoldState = scaffoldState,
                topBar = {
                    TopAppBar(
                        title = { Text(resources.getString(R.string.app_name)) },
                        contentColor = Color.White,
                        backgroundColor = materialBlue700
                    )
                },
                content = { paddingValues ->
                    MenuContent(paddingValues = paddingValues)
                }
            )
        }
    }
}

@Composable
fun MenuContent(paddingValues: PaddingValues) {
	val configuration = LocalConfiguration.current
	val menuPadding = 8.dp
	Surface(modifier = Modifier.padding(paddingValues)) {
		when (configuration.orientation) {
			ORIENTATION_LANDSCAPE -> {
				Column() {
					Row() {
						Text(
							"Appetizers",
							modifier = Modifier
								.weight(0.25f)
								.background(Purple80)
								.padding(menuPadding)
								.fillMaxWidth()
						)
						Text(
							"Salads",
							modifier = Modifier
								.weight(0.25f)
								.padding(menuPadding)
								.fillMaxWidth()
						)
					}
					Row(){
						Text(
							"Drinks",
							modifier = Modifier
								.weight(0.25f)
								.background(Pink80)
								.padding(menuPadding)
								.fillMaxWidth()
						)
						Text(
							"Mains",
							modifier = Modifier
								.weight(0.25f)
								.background(PurpleGrey80)
								.padding(menuPadding)
								.fillMaxWidth()
						)
					}
				}
			}
			else -> {
					Column {
					Text(
						"Appetizers",
						modifier = Modifier
							.weight(0.25f)
							.background(Purple80)
							.padding(menuPadding)
							.fillMaxWidth()
					)
					Text(
						"Salads",
						modifier = Modifier
							.weight(0.25f)
							.padding(menuPadding)
							.fillMaxWidth()
					)
					Text(
						"Drinks",
						modifier = Modifier
							.weight(0.25f)
							.background(Pink80)
							.padding(menuPadding)
							.fillMaxWidth()
					)
					Text(
						"Mains",
						modifier = Modifier
							.weight(0.25f)
							.background(PurpleGrey80)
							.padding(menuPadding)
							.fillMaxWidth()
					)
				}
			}
		}
	}
}

@Preview
@Composable
fun MenuContentPreview() {
	MenuContent(paddingValues = PaddingValues(20.dp))
}