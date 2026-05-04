# Initial Feature Test Cases
 
## Feature: Add New Appointment
 
### Test 1: Normal Operation
- What it tests: Creating a new appointment
- Expected result: Appointment is created with correct parameters (title, date, time, location and description)
- Result: Pass
 
### Test 2: Normal Operation 
- What it tests: Add an appointment created by user
- Expected result: Appointment is added to the appointment array
- Result: Pass
 
### Test 3: Edge case - invalid argument
- What it tests: Setting invalid month for appointment date
- Expected result: Throwing an invalid argument error
- Result: Pass
 
### CTest Output
Test project /Users/murayamayuui/CIS25/appointment-scheduler/build
Constructing a list of tests
Done constructing a list of tests
Updating test list for fixtures
Added 0 tests to meet fixture requirements
Checking test dependency graph...
Checking test dependency graph end
test 1
    Start 1: AppointmentManagerTests

1: Test command: /Users/murayamayuui/CIS25/appointment-scheduler/build/tests
1: Working Directory: /Users/murayamayuui/CIS25/appointment-scheduler/build
1: Test timeout computed to be: 10000000
1: Passed
1: Passed
1: Passed
1/1 Test #1: AppointmentManagerTests ..........   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.00 sec
