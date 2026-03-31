package edu.curso.notestasks.home.ui

sealed interface HomeEvent {
    class Reload() : HomeEvent
}