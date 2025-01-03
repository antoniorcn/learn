package edu.curso.cleanarchformvalidation.presentation

import android.os.Bundle
import android.widget.Toast
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.activity.viewModels
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material3.Button
import androidx.compose.material3.Checkbox
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.material3.TextField
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.key
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.input.KeyboardType
import androidx.compose.ui.text.input.PasswordVisualTransformation
import androidx.compose.ui.text.input.VisualTransformation
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import edu.curso.cleanarchformvalidation.ui.theme.CleanArchFormValidationTheme

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            CleanArchFormValidationTheme {
                Surface( modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background) {
                    val viewModel by viewModels<MainViewModel>()
                    val state = viewModel.state
                    val context = LocalContext.current
                    LaunchedEffect(key1 = context) {
                        viewModel.validationEvents.collect { event ->
                            when(event) {
                                is MainViewModel.ValidationEvent.Success -> {
                                    Toast.makeText(context, "Gravado com sucesso", Toast.LENGTH_LONG).show()
                                }

                            }
                        }
                    }
                    Column(modifier = Modifier.fillMaxSize()
                        .padding(32.dp),
                        verticalArrangement = Arrangement.Center) {
                        CampoTexto(texto = "Email", valor = state.email,
                            isError = state.emailError != null,
                            errorMessage = state.emailError) {
                            viewModel.onEvent(RegistrationFormEvents.EmailChanged(it))
                        }
                        CampoTexto(texto = "Password", valor = state.password,
                            isError = state.passwordError != null,
                            errorMessage = state.passwordError,
                            visualTransformation = PasswordVisualTransformation()) {
                            viewModel.onEvent(RegistrationFormEvents.PasswordChanged(it))
                        }
                        CampoTexto(texto = "Repeated Password", valor = state.repeatedPassword,
                            isError = state.repeatedPasswordError != null,
                            errorMessage = state.repeatedPasswordError,
                            visualTransformation = PasswordVisualTransformation()) {
                            viewModel.onEvent(RegistrationFormEvents.RepeatedPasswordChanged(it))
                        }
                        Row(modifier = Modifier.fillMaxWidth()) {
                            Checkbox(
                                checked = state.acceptedTerms,
                                onCheckedChange = { viewModel.onEvent( RegistrationFormEvents.AcceptTerms( it ) ) }
                            )
                            Spacer( modifier = Modifier.height(8.dp))
                            Text("Accept Terms", )
                        }
                        if (state.termsError != null) {
                            Text(text = state.termsError ?: "",
                                color = MaterialTheme.colorScheme.error,
                                fontSize = 12.sp)
                        }
                        Button( modifier = Modifier.align(Alignment.End),
                                onClick = {
                                    viewModel.onEvent(RegistrationFormEvents.Submit)
                        }) {
                            Text("Submit")
                        }
                    }
                }
            }
        }
    }
}

@Composable
fun CampoTexto(texto : String, valor : String,
               isError : Boolean,
               errorMessage : String?,
               visualTransformation: VisualTransformation = VisualTransformation.None,
               trocarValor : (String) -> Unit) {
    TextField(
        value = valor,
        onValueChange = { trocarValor( it ) },
        isError = isError,
        modifier = Modifier.fillMaxWidth(),
        placeholder = {Text(texto)},
        keyboardOptions = KeyboardOptions( keyboardType = KeyboardType.Email ),
        visualTransformation = visualTransformation
    )
    Spacer( modifier = Modifier.height(16.dp))
    if (isError) {
        Text(text = errorMessage ?: "",
            color = MaterialTheme.colorScheme.error,
            textAlign = TextAlign.End,
            fontSize = 12.sp)
    }
}