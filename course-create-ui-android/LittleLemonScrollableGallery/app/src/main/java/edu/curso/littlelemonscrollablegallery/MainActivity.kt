package edu.curso.littlelemonscrollablegallery

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.runtime.Composable
import androidx.compose.ui.tooling.preview.Preview
import edu.curso.littlelemonscrollablegallery.ui.theme.LittleLemonTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            LittleLemonTheme {
                AppScreen()
            }
        }
    }
}

@Composable
fun AppScreen() {
    ScrollableGalleryScreen()
}

@Preview
@Composable
fun PreviewAppScreen() {
    AppScreen()
}