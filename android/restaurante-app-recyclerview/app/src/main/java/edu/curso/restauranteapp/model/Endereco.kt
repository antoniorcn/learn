package edu.curso.restauranteapp.model

data class Endereco(var logradouro : String = "",
    var numero : Int = 0,
    var complemento : String = "",
    var bairro : String = "",
    var cidade : String = "",
    var estado : String = "",
    var location : GeoLocation = GeoLocation())
