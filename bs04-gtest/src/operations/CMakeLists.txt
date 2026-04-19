add_library(math add.cpp div.cpp mul.cpp sub.cpp)
target_include_directories(math PUBLIC include)
target_link_libraries(math PRIVATE fmt::fmt)

add_library(src::math ALIAS math)
