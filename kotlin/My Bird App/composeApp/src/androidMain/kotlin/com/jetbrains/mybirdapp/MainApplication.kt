package com.jetbrains.mybirdapp

import android.app.Application
import com.jetbrains.mybirdapp.di.initializeKoin
import org.koin.android.ext.koin.androidContext

class MainApplication : Application() {
    override fun onCreate() {
        super.onCreate()
        initializeKoin {
            androidContext( this@MainApplication )
        }
    }
}