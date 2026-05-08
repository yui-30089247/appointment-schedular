# Implement Epoch - Spec

## Problem statement
A user's datetime input will be stored as epoch time instead of storing the date (YYYY/MM/DD) and time (HH:MM) separately. This makes it easier to validate user input and work with the data. 

## Types involved
Appointment
Date 
Time
Date and Time classes will be combined into a single DateTime class

## Public interface
- DateTime class
- Methods to help convert from datetime object to epoch time

## Inputs and outputs
- Input: appointment date and time (start and end) => YYYY-MM-DD HH:MM
- Output: return epoch time (the number of secondd that have elapsed since 00:00:00 UTC on January 1, 1970)

## Edge cases
- Empty input (should be rejected)
- Past date (should be rejected)
- Start datetime does not come before end datetime (should be rejected)
- Duplicate input

## Three tests (English version)
- Normal: a user's datetime input will be stored as epoch time
- Edge 1: empty input should be rejected  
- Edge 2: past date should be rejected

## Design decisions
AI suggested two approaches: 
1. Direct integration with epoch conversion (manual handling)
2. Use <chrono> library for epoch handling
I chose Approach 2 because <chorono> library provides built-in utilities for handling epoch time, reducing the need for manual calculations. 