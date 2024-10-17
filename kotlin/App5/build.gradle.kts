// build.gradle.kts
plugins {
    kotlin("multiplatform") version "2.0.20"
}

repositories {
    mavenCentral()
}

kotlin {
    // macosX64("native") { // on macOS
    // linuxX64("native") { // on Linux
    mingwX64("native") { // on Windows
        binaries {
            executable()
        }
    }
}

tasks.withType<Wrapper> {
    gradleVersion = "8.7"
    distributionType = Wrapper.DistributionType.BIN
}