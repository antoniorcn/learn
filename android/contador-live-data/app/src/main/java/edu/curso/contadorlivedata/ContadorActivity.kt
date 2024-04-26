package edu.curso.contadorlivedata

import android.content.SharedPreferences
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProvider
import edu.curso.contadorlivedata.databinding.ContadorActivityBinding

class ContadorActivity() : AppCompatActivity() {

    private lateinit var binding : ContadorActivityBinding
    private lateinit var viewModelFactory: ContadorActivityViewModelFactory
    private lateinit var viewModel : ContadorViewModel
    override fun onCreate(bundle: Bundle?) {
        super.onCreate(bundle)
        binding = ContadorActivityBinding.inflate(layoutInflater)
        setContentView(binding.root)
        viewModelFactory = ContadorActivityViewModelFactory(10)
        viewModel = ViewModelProvider(this, viewModelFactory)[ContadorViewModel::class.java]

        viewModel.contadorData.observe(this, Observer {
            binding.contador = it
        })

        binding.btnIncrementar.setOnClickListener {
            viewModel.getIncrementedCount()
        }
    }
}