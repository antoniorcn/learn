package edu.curso.app6

interface Destinations {
    val route : String
}

val Home = object: Destinations{ override val route = "Home"}
val ScreenA = object: Destinations{ override val route = "ScreenA"}
val ScreenB = object: Destinations{ override val route = "ScreenB"}