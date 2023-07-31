cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(rgbled C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(rgbled
	main.c
)

pico_enable_stdio_usb(rgbled 1)
pico_enable_stdio_uart(rgbled 1)

pico_add_extra_outputs(rgbled)

target_link_libraries(rgbled pico_stdlib)
