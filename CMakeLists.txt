cmake_minimum_required(VERSION 3.10)
project(AppointmentSchedular)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable testing
enable_testing()

# Create library from your class implementations
# (uncomment and add files as you create them)
add_library(appointment_logic
    src/Date.cpp
    src/Time.cpp
    src/Location.cpp
    src/Memo.cpp
    src/main.cpp
    src/Appointment.cpp
    src/AppointmentManager.cpp
)

# Create main executable
add_executable(appointment_schedular src/main.cpp src/Date.cpp src/Time.cpp src/Location.cpp src/Memo.cpp src/Appointment.cpp src/AppointmentManager.cpp)
# target_link_libraries(recipe_manager recipe_lib)

# Create test executable
# add_executable(tests tests/test_main.cpp)
# target_link_libraries(tests recipe_lib)

# Register tests with CTest
# add_test(NAME RecipeTests COMMAND tests)
