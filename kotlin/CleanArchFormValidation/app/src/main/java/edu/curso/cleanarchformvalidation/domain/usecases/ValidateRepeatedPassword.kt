package edu.curso.cleanarchformvalidation.domain.usecases

class ValidateRepeatedPassword {
    fun execute(password : String, repeatedPassword: String) : ValidationResult {
        if(password != repeatedPassword) {
            return ValidationResult(
                false,
                "The password and repeated password doesn't match"
            )
        }
        return ValidationResult(true)
    }


}