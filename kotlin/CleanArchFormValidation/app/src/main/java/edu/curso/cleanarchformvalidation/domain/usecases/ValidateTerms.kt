package edu.curso.cleanarchformvalidation.domain.usecases

class ValidateTerms {
    fun execute(acceptedTerms : Boolean) : ValidationResult {
        if(!acceptedTerms) {
            return ValidationResult(
                false,
                "Please accept the Terms"
            )
        }

        return ValidationResult(true)
    }


}