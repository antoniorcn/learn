package edu.curso.littlelemonappbottomnavigation

interface Destination {
    var route : String
    var icon : Int
    var title : String
}

val destinationMenu = object : Destination {
    override var route = "menu"
    override var icon = R.drawable.ic_menu
    override var title = "Menu"
}


val destinationHome = object : Destination {
    override var route = "home"
    override var icon = R.drawable.ic_home
    override var title = "Home"
}

val destinationLocation = object : Destination {
    override var route = "location"
    override var icon = R.drawable.ic_location
    override var title = "Location"
}