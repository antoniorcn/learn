package edu.curso.jetpackcompose1

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.CornerSize
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.Shape
import androidx.compose.ui.graphics.painter.BrushPainter
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp

class JPActivity1 : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            Main()
        }
    }
}

@Composable
fun Main() {
    Column {
        Row {
            Text(modifier = Modifier
                .background(color = Color.Red)
                .padding(5.dp)
                .border(width = 2.dp,
                    color=Color.Blue,
                    shape= RoundedCornerShape(20.dp)),
                    text = "Titulo do Projeto")

        }
        Row {
            Text("Body")
        }
        Row {
            Text("Footer")
        }
    }
}

@Preview
@Composable
fun MainMaterial() {
    WoofTheme (darkTheme = false) {
        Surface (
            modifier = Modifier.fillMaxSize()
        ) {
            Greeting(text = "Hello World")
        }
    }
}

@Composable
fun Greeting( text : String ) {
    Column {
        Text("Greeting")
        Text(text)
    }

}