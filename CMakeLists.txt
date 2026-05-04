cmake_minimum_required(VERSION 3.10)
project(AppointmentScheduler)

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
    src/Appointment.cpp
    src/AppointmentManager.cpp
)

# Create main executable
add_executable(appointment_scheduler src/main.cpp)
target_link_libraries(appointment_scheduler appointment_logic)

# Create test executable
add_executable(tests tests/test_main.cpp)
target_link_libraries(tests appointment_logic)

# Register tests with CTest
add_test(NAME AppointmentManagerTests COMMAND tests)
