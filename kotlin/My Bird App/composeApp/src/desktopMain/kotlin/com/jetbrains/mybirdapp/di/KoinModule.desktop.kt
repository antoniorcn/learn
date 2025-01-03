package com.jetbrains.mybirdapp.di

import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module
import com.jetbrains.mybirdapp.shared.EmailClient

actual val targetModule: Module = module {
    singleOf(::EmailClient)
}