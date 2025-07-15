# 🔧 Insertion Sort C++ Implementation

This repository contains a generic C++ implementation of the Insertion Sort algorithm, along with a simple driver program that demonstrates sorting of user-provided integers and a fixed set of strings.

## ✨ Features

- **🌐 Template-based**: Supports sorting of any data type that provides comparison operators (`<`, `>`).
- **🧵 In-place**: Requires no extra memory beyond the input vector.
- **📊 Stable**: Preserves the relative order of equal elements.
- **🚀 Adaptive**: Performs better on partially sorted data.

## 📁 File Structure

```
📂 project-root/
├── insertion_sort.cpp     # Main source file containing the algorithm and demo
└── README.md              # This documentation file
```

## ⚡ Requirements

- A C++11 (or later) compliant compiler. For example:
  - `g++` version 4.8 or higher
  - `clang++` version 3.3 or higher

## 💪 Compilation

Open a terminal in the project directory and run:

```bash
# Using g++
g++ -std=c++11 -Wall -Wextra insertion_sort.cpp -o insertion_sort

# Or using clang++
clang++ -std=c++11 -Wall -Wextra insertion_sort.cpp -o insertion_sort
```

## 🚩 Usage

1. **Run the executable**:

   ```bash
   ./insertion_sort
   ```

2. **Input prompt**:

   - ✏️ Enter the number of integers you wish to sort.
   - ➕ Provide the integer values separated by space or newline.

3. **Output**:

   - 📋 Displays the sorted list of integers.
   - 📄 Then demonstrates sorting of a fixed set of strings and prints them.

Example:

```bash
$ ./insertion_sort
Enter number of integers: 5
Enter 5 integer values:
3 1 4 5 2
Sorted integers:
1 2 3 4 5

Sorted strings:
algorithm cpp insertion sort
```

