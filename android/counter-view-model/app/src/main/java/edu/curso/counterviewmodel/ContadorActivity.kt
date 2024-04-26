package edu.curso.counterviewmodel

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import edu.curso.counterviewmodel.databinding.ContadorActivityBinding

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
        binding.contador = viewModel.getContador()

        binding.btnIncrementar.setOnClickListener {
            viewModel.getIncrementedCount()
            binding.contador = viewModel.getContador()
        }
    }
}