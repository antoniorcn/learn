package edu.curso.restauranteapp.model

data class Restaurante(var nome : String = "",
                       var endereco : Endereco = Endereco(),
                       var website : String = "",
                       var telefone : String = "",
                       var email : String = "",
                       var descricao : String = "",
                       var nota : UInt = 0U
)