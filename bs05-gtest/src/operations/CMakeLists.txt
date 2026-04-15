add_library(math add.cc div.cc mul.cc sub.cc)
target_include_directories(math PUBLIC include)
target_link_libraries(math PRIVATE fmt::fmt)

add_library(src::math ALIAS math)
