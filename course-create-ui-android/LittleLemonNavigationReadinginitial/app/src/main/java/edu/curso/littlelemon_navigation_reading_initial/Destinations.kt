package edu.curso.littlelemon_navigation_reading_initial

interface Destinations {
    var routes : String
}

var HomeDestination = object : Destinations {
    override var routes = "Home"
}

var MenuDestination = object : Destinations {
    override var routes = "Menu"
}
