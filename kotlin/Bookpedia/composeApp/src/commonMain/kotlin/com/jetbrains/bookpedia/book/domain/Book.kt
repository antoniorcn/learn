package com.jetbrains.bookpedia.book.domain

data class Book(
    val id : String = "",
    val title : String = "",
    val imageUrl : String = "",
    val authors : List<String> = emptyList(),
    val description : String?,
    val languages : List<String> = emptyList(),
    val firsPublishYear : String?,
    val averageRating : Double?,
    val ratingCount : Int?,
    val numPages : Int?,
    val numEditions : Int = 1
)