package com.plcoding.cryptotracker.crypto.data.networking.dto

import kotlinx.serialization.Serializable

@Serializable
data class CoinDTO (
    val id : String = "0",
    val rank : Int = 0,
    val name : String = "---",
    val symbol : String = "---",
    val marketCapUsd : String = "0.0",
    val priceUsd : String = "0.0",
    val changePercent24hr : String = "0.0"
)