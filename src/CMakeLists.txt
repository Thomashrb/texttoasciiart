add_executable(text2ascii main.cpp)
add_library(text2ascii_lib font_colossal.cpp)

# expose library files (used in testing)
target_include_directories(text2ascii_lib PUBLIC .)
