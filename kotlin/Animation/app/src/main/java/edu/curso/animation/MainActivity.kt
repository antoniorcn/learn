package edu.curso.animation

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.animation.AnimatedVisibility
import androidx.compose.animation.core.animateFloatAsState
import androidx.compose.animation.core.tween
import androidx.compose.animation.fadeIn
import androidx.compose.animation.fadeOut
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.wrapContentSize
import androidx.compose.material3.Button
import androidx.compose.material3.Icon
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.MutableState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.saveable.rememberSaveable
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.painterResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.sp
import edu.curso.animation.ui.theme.AnimationTheme
import kotlinx.coroutines.withTimeout

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            val visivel = remember { mutableStateOf( false ) }
            AnimationTheme {
                Surface (modifier = Modifier
                    .fillMaxSize()
                    .wrapContentSize(align = Alignment.BottomCenter)) {
                    Greeting(visivel)
                }
            }
        }
    }
}

@Composable
fun Greeting(visivel : MutableState<Boolean>) {
    Scaffold() { innerPadding ->
        Column (
            modifier = Modifier.padding(innerPadding)
        ) {
            AnimatedVisibility(visible = visivel.value,
                enter = fadeIn( animationSpec = tween(2000) ),
                exit = fadeOut( animationSpec = tween(2000) )
            ) {
                Text("Você está vendo isso", fontSize = 28.sp)
            }
            Button(onClick={ visivel.value = !visivel.value}) {
                Text("Tornar: ${if (visivel.value) "invisivel" else "visível"}",
                    color = Color.Yellow ,
                    style = TextStyle(
                        fontFamily = FontFamily.Monospace
                    )
                )
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
fun AnimationLogo() {
    var alpha by remember { mutableStateOf( 0f ) }

    var animatedAlpha = animateFloatAsState( targetValue = alpha,
        animationSpec = tween(4000))

    Box(modifier = Modifier.clickable { alpha += 0.2f  }) {
        Image(
            modifier = Modifier.background(Color.Green),
            painter = painterResource(R.drawable.ic_launcher_foreground),
            contentDescription = "Logo",
            alpha = alpha
        )
    }
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    AnimationTheme {
        val visivel = remember { mutableStateOf( false ) }
        Greeting(visivel)
    }
}