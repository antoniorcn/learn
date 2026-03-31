package edu.curso.componentes

import androidx.compose.runtime.Composable

@Composable
actual fun CircularButtonCarousel(items : List<CategoryInfo>,
                                  onSelected : (item : CategoryInfo) -> Unit,
                                  content : @Composable (item: CategoryInfo) -> Unit) {
    CircularButtonCarouselCommon(items, onSelected, content)
}