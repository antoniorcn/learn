package edu.curso.cleanarchformvalidation.domain.usecases

class ValidatePassword {
    fun execute(password : String) : ValidationResult {
        if(password.length < 8) {
            return ValidationResult(
                false,
                "The password needs to consist at least 8 characters"
            )
        }

        val containsLetterAndDigits = password.any{ it.isDigit() } && password.any{ it.isLetter() }
        if (!containsLetterAndDigits) {
            return ValidationResult(
                false,
                "The password needs to contains at least one letter and one digit"
            )
        }

        return ValidationResult(true)
    }


}