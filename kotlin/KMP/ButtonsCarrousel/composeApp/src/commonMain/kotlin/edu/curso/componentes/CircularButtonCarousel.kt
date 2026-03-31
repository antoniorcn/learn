package edu.curso.componentes

import androidx.compose.animation.core.Animatable
import androidx.compose.animation.core.tween
import androidx.compose.foundation.gestures.detectVerticalDragGestures
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.offset
import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.scale
import androidx.compose.ui.input.pointer.pointerInput
import androidx.compose.ui.platform.LocalDensity
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.IntOffset
import androidx.compose.ui.unit.dp
import kotlinx.coroutines.launch
import kotlin.math.PI
import kotlin.math.abs
import kotlin.math.cos
import kotlin.math.roundToInt
import kotlin.math.sin

@Composable
expect fun CircularButtonCarousel(items : List<CategoryInfo>,
                                                    onSelected : (item : CategoryInfo) -> Unit,
                                                    content : @Composable (item: CategoryInfo) -> Unit)
@Composable
fun CircularButtonCarouselCommon(items : List<CategoryInfo>,
                           onSelected : (item : CategoryInfo) -> Unit,
                           content : @Composable (item: CategoryInfo) -> Unit) {
    val radius = 120.dp
    val angleOffset = remember { Animatable(0f) }
    val anglePerButton = 360f / items.size
    val coroutineScope = rememberCoroutineScope()

    val highlightAngle = 0f // O botão mais próximo desse ângulo será ampliado

    Box(
        modifier = Modifier
            .fillMaxSize()
            .pointerInput(Unit) {
                detectVerticalDragGestures(
                    onDragEnd = {
                        // Snap para o ângulo mais próximo
                        val snappedAngle = (angleOffset.value / anglePerButton).roundToInt() * anglePerButton
                        coroutineScope.launch {
                            angleOffset.animateTo(
                                targetValue = snappedAngle,
                                animationSpec = tween(durationMillis = 300)
                            )
                        }
                    },
                    onVerticalDrag = { change, dragAmount ->
                        change.consume()
                        val delta = dragAmount / 5f
                        coroutineScope.launch {
                            angleOffset.snapTo(angleOffset.value + delta)
                        }
                    }
                )
            },
        contentAlignment = Alignment.CenterStart
    ) {
        val angleBetweenButtons = 360f / items.size

        items.forEachIndexed { i, itemIt ->
            val angleInDegrees = angleOffset.value + i * angleBetweenButtons
            val angleInRadians = angleInDegrees.toDouble() / 180.0 * PI
            val xOffset = cos(angleInRadians).toFloat() * radius.toPx()
            val yOffset = sin(angleInRadians).toFloat() * radius.toPx()

            // Distância angular entre o botão e o ângulo de destaque
            val angleDiff = abs((angleInDegrees - highlightAngle + 360f) % 360f)
            if (angleDiff == 0f) onSelected( itemIt )
            val scale = if (angleDiff < 45f) {
                // Amplia quanto mais próximo do ângulo-alvo
                (1.2f - (angleDiff / 45f * 0.2f)) * 1.3f
            } else {
                1f
            }
            Box(modifier = Modifier
                .offset { IntOffset(xOffset.roundToInt(), yOffset.roundToInt()) }
                .scale( scale )) {
                content(itemIt)
            }
        }
    }
}

// Extensão para converter Dp para Px
@Composable
fun Dp.toPx(): Float {
    return with(LocalDensity.current) { this@toPx.toPx() }
}