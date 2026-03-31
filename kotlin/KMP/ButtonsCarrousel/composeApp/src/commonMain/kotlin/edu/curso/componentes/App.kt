package edu.curso.componentes

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import androidx.compose.runtime.MutableState
import androidx.compose.runtime.mutableStateOf
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import buttonscarrousel.composeapp.generated.resources.Res
import buttonscarrousel.composeapp.generated.resources.compose_multiplatform
import org.jetbrains.compose.ui.tooling.preview.Preview


val categories = listOf(
    CategoryInfo("LANCHES", "LANCHES", Res.drawable.compose_multiplatform, Color(0xFF6FD2C3)),
    CategoryInfo("BEBIDAS", "BEBIDAS", Res.drawable.compose_multiplatform, Color(0xFFFFD37A)),
    CategoryInfo("ACOMPANHAMENTOS", "ACOMPANHAMENTOS", Res.drawable.compose_multiplatform, Color(0xFFFF8A65))
)

val subcategories = listOf(
    SubCategoryInfo("BEBIDAS", "REFRIGERANTES", Res.drawable.compose_multiplatform),
    SubCategoryInfo("BEBIDAS", "SUCOS", Res.drawable.compose_multiplatform),
    SubCategoryInfo("BEBIDAS", "MILK SHAKES", Res.drawable.compose_multiplatform),
    SubCategoryInfo("LANCHES", "X BURGUER", Res.drawable.compose_multiplatform),
    SubCategoryInfo("LANCHES", "X SALADA", Res.drawable.compose_multiplatform),
    SubCategoryInfo("ACOMPANHAMENTOS", "BATATA FRITA", Res.drawable.compose_multiplatform),
    SubCategoryInfo("ACOMPANHAMENTOS", "NUGGETS", Res.drawable.compose_multiplatform)
)

val currentSubCategories : MutableState<List<SubCategoryInfo>> = mutableStateOf(listOf())


@Composable
@Preview
fun App() {
    MaterialTheme {
        val scrollState = rememberScrollState( 0 )
        Surface(color = MaterialTheme.colors.background) {
            Column(
                modifier = Modifier
                    .fillMaxSize()
            ) {
                Header()
                TitleSection()
                Row(
                    modifier = Modifier
                        .fillMaxSize()
                ) {
                    Column(
                        modifier = Modifier
                            .fillMaxHeight()
                            .fillMaxWidth(0.5f),
                        verticalArrangement = Arrangement.Center,
                        horizontalAlignment = Alignment.Start
                    ) {
                        CircularButtonCarousel(categories, onSelected = {
                            println("Categoria ${it.label} selecionada")
                            currentSubCategories.value = subcategories.filter { subcategory -> subcategory.categoryId == it.categoryId }
                        }) {
                            CategoryButtons(it)
                        }
                    }
                    Column(
                        modifier = Modifier
                            .fillMaxHeight()
                            .fillMaxWidth(0.5f)
                            .verticalScroll(scrollState)
                            .background(Color.White),
                        verticalArrangement = Arrangement.Center,
                        horizontalAlignment = Alignment.CenterHorizontally
                    ) {
                        SubcategoryButtons(currentSubCategories.value, onClick = {
                            println(it)
                        })
                    }
                }
            }
        }
    }
}