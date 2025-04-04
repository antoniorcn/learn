import androidx.compose.material3.Card
import androidx.compose.material3.LocalTextStyle
import androidx.compose.material3.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.tooling.preview.PreviewLightDark
import androidx.compose.ui.unit.sp
import com.plcoding.cryptotracker.R
import com.plcoding.cryptotracker.ui.theme.CryptoTrackerTheme


@Composable
fun InfoCard (
    title : String,
    formattedText : String,
    icon : ImageVector,
    modifier : Modifier = Modifier,
    contentColor: Color = MaterialTheme.colorScheme.onSurface,
    formattedTextStyle : TextStyle = LocalTextStyle.current.copy(
        textAlign = TextAlign.Center,
        fontSize = 18.sp,
        color = contentColor
    )
) {
    Card () {

    }
}

@PreviewLightDark
@Composable
private fun InfoCardPreview() {
    CryptoTrackerTheme {
        InfoCard (
            title = "Price",
            formattedText = "$ 63,157.44",
            icon = ImageVector.vectorResource(id = R.drawable.dollar)
        )
    }
}