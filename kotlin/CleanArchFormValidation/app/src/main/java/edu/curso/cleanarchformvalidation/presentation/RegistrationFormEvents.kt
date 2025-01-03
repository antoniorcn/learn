package edu.curso.cleanarchformvalidation.presentation

import edu.curso.cleanarchformvalidation.domain.usecases.ValidateRepeatedPassword

sealed class RegistrationFormEvents {

    data class EmailChanged(val email : String) : RegistrationFormEvents()
    data class PasswordChanged(val password : String) : RegistrationFormEvents()
    data class RepeatedPasswordChanged(val repeatedPassword : String) : RegistrationFormEvents()
    data class AcceptTerms(val isAccepted : Boolean) : RegistrationFormEvents()

    object Submit : RegistrationFormEvents()
}