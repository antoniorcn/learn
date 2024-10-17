package edu.curso.restauranteapp.activity

import android.app.Activity
import android.os.Bundle
import androidx.activity.ComponentActivity
import edu.curso.restauranteapp.R
import edu.curso.restauranteapp.model.Restaurante

class RestauranteFormActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.restaurante_form_layout)
    }
}