package com.jetbrains.mybirdapp.di

import com.jetbrains.mybirdapp.shared.EmailClient
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module

actual val targetModule: Module = module {
    singleOf( ::EmailClient )
}
