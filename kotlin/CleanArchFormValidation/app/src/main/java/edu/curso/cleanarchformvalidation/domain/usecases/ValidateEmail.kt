package edu.curso.cleanarchformvalidation.domain.usecases

import android.util.Patterns

class ValidateEmail {
    fun execute(email : String) : ValidationResult {
        if(email.isBlank()) {
            return ValidationResult(
                false,
                "The email can not be blank"
            )
        }

        if (!Patterns.EMAIL_ADDRESS.matcher(email).matches()) {
            return ValidationResult(
                false,
                "The email should be valid"
            )
        }

        return ValidationResult(true)
    }


}