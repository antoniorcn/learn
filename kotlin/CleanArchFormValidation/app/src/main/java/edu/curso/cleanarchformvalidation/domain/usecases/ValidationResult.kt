package edu.curso.cleanarchformvalidation.domain.usecases

class ValidationResult (
    val successful : Boolean,
    val errorMessage : String? = null
) {
}