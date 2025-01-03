package com.plcoding.cryptotracker.crypto.presentation.models

import androidx.annotation.DrawableRes
import com.plcoding.cryptotracker.crypto.domain.Coin
import com.plcoding.cryptotracker.core.presentation.util.getDrawableIdForCoin
import java.text.NumberFormat
import java.util.Locale

data class CoinUi (
    val id : String,
    val rank : Int,
    val name : String,
    val symbol : String,
    val marketCapUsd : DisplayableNumber,
    val priceUsd : DisplayableNumber,
    val changePercent24hr : DisplayableNumber,
    @DrawableRes val iconRes : Int
)


data class DisplayableNumber (
    val value : Double,
    val formatted : String
)

fun Double.toDisplayableNumber() : DisplayableNumber {
    val formatter = NumberFormat.getNumberInstance(Locale.getDefault()).apply {
        minimumFractionDigits = 2
        maximumFractionDigits = 2
    }
    return DisplayableNumber(this, formatter.format(this))
}

fun Coin.toCoinUi() : CoinUi {
    return CoinUi(
        id=this.id,
        rank=this.rank,
        name=this.name,
        symbol=this.symbol,
        marketCapUsd = this.marketCapUsd.toDisplayableNumber(),
        priceUsd = this.priceUsd.toDisplayableNumber(),
        changePercent24hr = this.changePercent24hr.toDisplayableNumber(),
        iconRes = getDrawableIdForCoin(this.symbol)
    )
}