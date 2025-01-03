package com.jetbrains.bookpedia.book.domain

data class Book( var id : String = "",
    var title : String = "",
    var imageUrl : String = "",
    var authors : List<String> = emptyList(),
    var description : String = "",
    var languages : List<String> = emptyList(),
    var firsPublishYear : String = "",
    var averageRating : Double = 0.0,
    var ratingCount : Int = 0,
    var numPages : Int = 0,
    var numEditions : Int = 0
) {
}