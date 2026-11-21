cmake_minimum_required(VERSION 3.20)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/cmake/toolchain-arm-none-eabi.cmake)

project(stm32f405-bare-metal
    VERSION 1.0
    LANGUAGES C ASM
    DESCRIPTION "STM32F405 Bare-Metal Driver Development"
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include(cmake/stm32f405xx.cmake)

# add_subdirectory(drivers)
# add_subdirectory(bsp)
# add_subdirectory(exercises/01_gpio/led_toggle)
add_subdirectory(exercises/03_debugging/hello_world_semihosting)
