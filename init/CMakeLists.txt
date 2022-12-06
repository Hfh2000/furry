include(FetchContent)

FetchContent_MakeAvailable(pico-sdk)

add_library(JuJuJUL init.c)

