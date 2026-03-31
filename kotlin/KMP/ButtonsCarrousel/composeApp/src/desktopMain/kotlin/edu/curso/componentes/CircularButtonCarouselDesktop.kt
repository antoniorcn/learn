package edu.curso.componentes

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.offset
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.ExperimentalComposeUiApi
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.scale
import androidx.compose.animation.core.Animatable
import androidx.compose.animation.core.tween
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.unit.IntOffset
import kotlinx.coroutines.launch
import kotlin.math.PI
import kotlin.math.abs
import kotlin.math.absoluteValue
import kotlin.math.cos
import kotlin.math.min
import kotlin.math.roundToInt
import kotlin.math.sign
import kotlin.math.sin

//@Composable
//actual fun CircularButtonCarousel(items : List<CategoryInfo>,
//                                  onSelected : (item : CategoryInfo) -> Unit,
//                                  content : @Composable (item: CategoryInfo) -> Unit) {
//    CircularButtonCarouselCommon(items, onSelected, content)
//}


@OptIn(ExperimentalComposeUiApi::class)
@Composable
actual fun CircularButtonCarousel(items : List<CategoryInfo>,
                                          onSelected : (item : CategoryInfo) -> Unit,
                                          content : @Composable (item: CategoryInfo) -> Unit) {
    val radius = 150f
    val highlightAngle = 0f // O botão mais próximo desse ângulo será ampliado
    // var baseAngle by remember { mutableStateOf(0f) }
    val coroutineScope = rememberCoroutineScope()
    val angleBetweenButtons = 360f / items.size
    val angleAnim = remember { Animatable(0f) }
    var currentSelectedIndex by remember { mutableStateOf(-1) }
    Box(
        modifier = Modifier
            .fillMaxSize()
            .pointerInput(Unit) {
                awaitPointerEventScope {
                    while (true) {
                        val event = awaitPointerEvent()
                        val scrollDelta = event.changes.firstOrNull()?.scrollDelta?.y ?: 0f
                        if (scrollDelta.absoluteValue > 1f) {
                            val direction = -scrollDelta.sign // +1 para baixo, -1 para cima
                            val nextAngle = angleAnim.value + direction * angleBetweenButtons

                            coroutineScope.launch {
                                angleAnim.animateTo(
                                    nextAngle,
                                    animationSpec = tween(durationMillis = 400)
                                )
                            }
                        }
                    }
                }
            },
        contentAlignment = Alignment.CenterStart
    ) {
        val baseAngle = angleAnim.value
        var closestIndex = 0
        var minDistance = Float.MAX_VALUE
        items.forEachIndexed { i, itemIt ->
            val maxScale = 1.5f
//            val normalScale = 1f
//            val angle = (baseAngle + i * angleBetweenButtons) % 360
//            val rad = Math.toRadians(angle.toDouble())
//            val x = cos(rad).toFloat() * radius
//            val y = sin(rad).toFloat() * radius
//
//            // Zoom suave baseado na distância angular até o topo (0 graus)
//            val angularDistance = min(abs((angle + 360) % 360 - 0f), 360f - abs((angle + 360) % 360 - 0f))
//            val scale = 1f + (1f - (angularDistance / 180f)) * maxScale  // máximo: 1.4, mínimo: 1.0

            val angle = (baseAngle + i * angleBetweenButtons) % 360
            val normalizedAngle = (angle + 360) % 360
            val distance = min(normalizedAngle, 360f - normalizedAngle)

            if (distance < minDistance) {
                minDistance = distance
                closestIndex = i
            }

            val rad = Math.toRadians(angle.toDouble())
            val x = cos(rad).toFloat() * radius
            val y = sin(rad).toFloat() * radius

//            val scale = 1f + (1f - (distance / 180f)) * 0.4f
            // Zoom suave baseado na distância angular até o topo (0 graus)
            val angularDistance = min(abs((angle + 360) % 360 - 0f), 360f - abs((angle + 360) % 360 - 0f))
            val scale = 1f + (1f - (angularDistance / 180f)) * maxScale  // máximo: 1.4, mínimo: 1.0

            Box(
                modifier = Modifier
                    .offset { IntOffset(x.roundToInt(), y.roundToInt()) }
                    .scale(scale)) {
                content(itemIt)
            }
            // Dispara o evento quando o botão central muda
            LaunchedEffect(closestIndex) {
                if (closestIndex != currentSelectedIndex) {
                    currentSelectedIndex = closestIndex
                    println("Selecionado: Botão ${closestIndex + 1}")
                }
            }
        }
    }
}
