cmake_minimum_required(VERSION 3.10)
project(RecipeManager)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable testing
enable_testing()

# Create library from your class implementations
# (uncomment and add files as you create them)
# add_library(recipe_lib
#     src/Recipe.cpp
#     src/RecipeManager.cpp
# )

# Create main executable
add_executable(recipe_manager src/main.cpp)
# target_link_libraries(recipe_manager recipe_lib)

# Create test executable
# add_executable(tests tests/test_main.cpp)
# target_link_libraries(tests recipe_lib)

# Register tests with CTest
# add_test(NAME RecipeTests COMMAND tests)
