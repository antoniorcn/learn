package edu.curso.littlelemonlazygridreadinginitial

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.BorderStroke
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.layout.wrapContentHeight
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.geometry.Offset
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.Shadow
import androidx.compose.ui.text.SpanStyle
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.buildAnnotatedString
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.text.style.TextDecoration
import androidx.compose.ui.text.withStyle
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import edu.curso.littlelemonlazygridreadinginitial.ui.theme.LittleLemonTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            ShapeTest()
        }
    }
}

@Composable
fun Main() {
    LittleLemonTheme {
        AppScreen()
    }
}

@Composable
fun FontTest() {
    Text(
        text="Hello World",
        color = Color.Blue,
        fontFamily = FontFamily.Monospace,
        letterSpacing = 4.sp,
        style = TextStyle(
            fontSize = 24.sp,
            shadow = Shadow(
                color = Color.Black,
                offset = Offset(8f, 8f),
                blurRadius = 4f),
            textAlign = TextAlign.Center,
            textDecoration = TextDecoration.combine(
                listOf(
                    TextDecoration.Underline, TextDecoration.LineThrough
                )
            )

        ),
        modifier = Modifier
            .width(500.dp)
            .background(color = Color.Yellow)
        )
    Text(
        buildAnnotatedString {
            withStyle( style = SpanStyle(
                color = Color.Red,
                fontSize = 50.sp
            )) {
                append("H")
            }
            withStyle( style = SpanStyle(
                color = Color.Blue,
                fontSize = 50.sp
            )) {
                append("e")
            }
            append("ello World")
        }
    )
}

@Composable
fun ShapeTest() {
    Surface(
        color = Color.Yellow,
        modifier = Modifier
            .background(color = Color.Black)
            .fillMaxSize(),
        shape = RoundedCornerShape(50, 50, 50, 50),
        border = BorderStroke(color=Color.Blue, width = 10.dp)
    ) {

    }
}

@Composable
fun SurfaceTest() {
    Column(
        verticalArrangement = Arrangement.Center
    ) {
        Surface(
            color = Color.Yellow,
            modifier = Modifier
                .fillMaxHeight(0.35f)
                .fillMaxWidth(),
        ) {
            Text(
                text = "Teste 1",
                fontSize = 60.sp,
                color = Color.Blue,
                modifier = Modifier
                    .border(5.dp, color = Color.Blue)
                    .wrapContentHeight(
                        align = Alignment.Top,
                    )
                    .background(color = Color.Cyan)
            )
        }
        Surface(
            color = Color.Yellow,
            modifier = Modifier
                .fillMaxHeight(0.5f)
                .fillMaxWidth(),

            ) {
            Text(
                text = "Teste 2",
                fontSize = 60.sp,
                color = Color.Blue,
                modifier = Modifier
                    .fillMaxHeight()
                    .border(5.dp, color = Color.Blue)
                    .background(color = Color.Cyan)
            )
        }
        Surface(
            color = Color.Yellow,
            modifier = Modifier
                .fillMaxHeight(1f)
                .fillMaxWidth(),

            ) {
            Text(
                text = "Teste 3",
                fontSize = 60.sp,
                color = Color.Blue,
                modifier = Modifier
                    .fillMaxHeight()
                    .border(5.dp, color = Color.Blue)
                    .background(color = Color.Cyan)
            )
        }
    }
}

@Preview(showBackground = true)
@Composable
fun MainTestPreview() {
    ShapeTest()
}

@Composable
private fun AppScreen() {
    LazyGrid()
}

