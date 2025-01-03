package edu.curso.approomdb1

import android.app.Application

class AppRoomDB1 : Application() {
    lateinit var appContainer : AppContainer

    override fun onCreate() {
        super.onCreate()
        appContainer = AppContainer(this)
    }
}