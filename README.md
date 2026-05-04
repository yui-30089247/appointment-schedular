# Appointment scheduler
This program allows users to view, add, delete and edit appointments on a calendar.

## Features
- Show calendar with appointments (command line arguments or Qt UI framework)
- View an appointment by specific date
- Add an appointment
- Delete an appointment
- Edit an appointment

## Building
```
cmake -S . -B build
cmake --build build
```

## Running
```
./build/appointment-scheduler
```

## Running Tests
```
ctest --test-dir build --verbose
```

## Author
Yui Dayal - CIS 25 Final Project




