include(FetchContent)

# gtest: Google Test
FetchContent_Declare(
  GTest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
  FIND_PACKAGE_ARGS
)
FetchContent_MakeAvailable(GTest)

# fmt: Format Library
CPMAddPackage(
  NAME fmt
  GITHUB_REPOSITORY fmtlib/fmt
  GIT_TAG 12.0.0
  EXCLUDE_FROM_ALL True
  SYSTEM True)