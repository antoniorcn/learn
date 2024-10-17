package edu.curso.app1jetpackcompose

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.material3.Text


class AppActivity : ComponentActivity() {

    override fun onCreate(bundle : Bundle?) {
        super.onCreate(bundle)

        setContent {
            Text("Teste")
        }
    }
}