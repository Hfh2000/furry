cmake_minimum_required(VERSION 3.13)
include(FetchContent)
FetchContent_Declare(
	pico-sdk
	GIT_REPOSITORY https://github.com/raspberrypi/pico-sdk.git
	GIT_SUBMODULES_RECURSE OFF)
FetchContent_MakeAvaliable(pico-sdk)


include(${pico-sdk_SOURCE_DIR}/external/pico_sdk_import.cmake)

project(furry LANGUAGES C CXX ASM)

add_subdirectory(init)
add_subdirectory(log)

add_executable(write_usb main.c)
target_link_libraries(write_usb PUBLIC FurryLib)
target_link_libraries(write_usb PUBLIC JuJuJUL)

