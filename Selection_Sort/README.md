# Selection Sort with User Input

This C++ program demonstrates an in-place selection sort algorithm with a dynamic user input feature. Users can specify the number of integers to sort and provide the values at runtime.

## Features

* **Generic Implementation**: Template-based selection sort works with any data type supporting comparison (e.g., `int`, `float`, `string`).
* **User Interaction**: Reads the array size and elements from standard input.
* **Stable Demo**: Includes a static string array demo for further illustration.
* **Minimal Dependencies**: Uses only the C++ Standard Library.

## File Structure

* `selection_sort_with_input.cpp` – Main source file containing:

  * `selectionSort` template function.
  * `main` function with user input handling and demonstration.

## Requirements

* C++11 (or later) compatible compiler.

## Compilation

```bash
# Using g++
g++ -std=c++11 -Wall -Wextra -o selection_sort selection_sort_with_input.cpp
```

## Usage

```bash
# Run the executable
./selection_sort
```

1. Enter the number of integers when prompted.
2. Provide each integer separated by spaces or newlines.
3. The program will display the original array, then the sorted result.

### Sample Run

```
Enter number of integers: 6
Enter 6 integers:
64 25 12 22 11 90
Original integer array:
64 25 12 22 11 90
Sorted integer array:
11 12 22 25 64 90

Sorted string array:
apple banana mango zebra
```

