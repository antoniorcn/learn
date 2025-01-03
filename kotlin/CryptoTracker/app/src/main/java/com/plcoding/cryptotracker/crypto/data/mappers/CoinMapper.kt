package com.plcoding.cryptotracker.crypto.data.mappers

import com.plcoding.cryptotracker.crypto.data.networking.dto.CoinDTO
import com.plcoding.cryptotracker.crypto.domain.Coin

fun CoinDTO.toCoin() : Coin {
    return Coin(
        this.id,
        this.rank,
        this.name,
        this.symbol,
        this.marketCapUsd.toDouble(),
        this.priceUsd.toDouble(),
        this.changePercent24hr.toDouble()
    )
}