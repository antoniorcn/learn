package edu.curso.componentes

import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxWidth
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

data class SubCategoryInfo(
    val categoryId : String,
    val label : String,
    val image : DrawableResource,
    val color : Color = Color.Red
)

@Composable
fun SubcategoryButtons(subcategories : List<SubCategoryInfo>, onClick : (item : SubCategoryInfo) -> Unit ) {
    Column(
        modifier = Modifier
            .fillMaxWidth()
            .padding(top = 8.dp),
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        subcategories.forEach { subCategory ->
            Box(
                modifier = Modifier
                    .padding(vertical = 8.dp)
                    .background(Color(0xFFE0E0E0), RoundedCornerShape(25.dp))
                    .height(60.dp)
                    .width(300.dp)
                    .clickable { onClick(subCategory) },
                contentAlignment = Alignment.Center
            ) {
                Row(
                    verticalAlignment = Alignment.CenterVertically,
                    modifier = Modifier.padding(horizontal = 16.dp)
                ) {
                    Image(
                        painter = painterResource(resource = subCategory.image),
                        contentDescription = subCategory.label,
                        modifier = Modifier.size(40.dp)
                    )
                    Spacer(modifier = Modifier.width(16.dp))
                    Text(
                        text = subCategory.label,
                        color = Color(0xFF4E2500),
                        style = MaterialTheme.typography.body2
                    )
                }
            }
        }
    }
}