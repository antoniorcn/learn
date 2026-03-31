package edu.curso.componentes

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.dp
import org.jetbrains.compose.resources.DrawableResource
import org.jetbrains.compose.resources.painterResource

data class CategoryInfo(
    val categoryId : String,
    val label : String,
    val image : DrawableResource,
    val color : Color
)

@Composable
fun CategoryButtons(info : CategoryInfo) {
    Row(
        verticalAlignment = Alignment.CenterVertically,
        modifier = Modifier
            .padding(vertical = 8.dp)
    ) {
        Image(
            painter = painterResource(resource = info.image),
            contentDescription = info.label,
            modifier = Modifier
                .size(60.dp)
                .padding(end = 8.dp)
        )
        Box(
            modifier = Modifier
                .height(50.dp)
                .width(220.dp)
                .background(info.color, shape = RoundedCornerShape(12.dp)),
            contentAlignment = Alignment.Center
        ) {
            Text(
                text = info.label,
                color = Color(0xFF4E2500),
                style = MaterialTheme.typography.body1
            )
        }
    }
}