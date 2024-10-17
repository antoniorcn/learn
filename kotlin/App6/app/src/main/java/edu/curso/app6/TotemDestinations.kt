package edu.curso.app6

interface TotemDestinations {
    val route : String
}

val Categoria = object : TotemDestinations {
    override val route = "Categoria"
}

val GrupoProdutos = object : TotemDestinations {
    override val route = "GrupoProdutos"
}

val Produto = object : TotemDestinations {
    override val route = "Produto"
}

val Detalhes = object : TotemDestinations {
    override val route = "Detalhes"
}
