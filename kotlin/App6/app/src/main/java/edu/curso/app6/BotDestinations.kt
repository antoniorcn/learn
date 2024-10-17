package edu.curso.app6

data class BotDestinations (
    val route : String,
    val icon : Int,
    val label : String
)

val tab1List = listOf(
        BotDestinations(route="Home",
            icon=android.R.drawable.ic_menu_week, label="Home Screen"),
        BotDestinations(route="TargetA",
        icon=android.R.drawable.ic_menu_preferences, label="Target A"),
        BotDestinations(route="TargetB",
            icon=android.R.drawable.ic_menu_edit, label="Target B")
    )