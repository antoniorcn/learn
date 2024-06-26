package edu.curso.littlelemonexercise

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.stringResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.sp
import edu.curso.littlelemonexercise.ui.theme.LittleLemonExerciseTheme


class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContent {
            LittleLemonExerciseTheme {
                // A surface container using the 'background' color from the theme
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    RestaurantName(
                        stringResource(id = R.string.title),
                        32)
                }
            }
        }
    }
}

@Composable
fun Greeting(name: String, modifier: Modifier = Modifier) {
    Text(
        text = "$name",
        modifier = modifier
    )
}

@Composable
fun RestaurantName(name: String, size : Int, modifier: Modifier = Modifier) {
    Text(
        text = "$name",
        fontSize = size.sp,
        modifier = modifier
    )
}


@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    LittleLemonExerciseTheme {
        Greeting("Android")
    }
}

@Preview(showBackground = true)
@Composable
fun RestaurantNamePreview() {
    LittleLemonExerciseTheme {
        RestaurantName(stringResource(id = R.string.title), 32)
    }
}