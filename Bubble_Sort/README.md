## Optimized Bubble Sort

This repository provides an implementation of an **optimized, type-safe bubble sort** in C++ using templates and best practices. The algorithm includes early termination when the array is already sorted and progressively reduces the inner loop bound for improved performance.

---

### Features

* **Early Termination:** Stops the algorithm if no swaps occur during a pass (best-case O(n)).
* **Adaptive Bound:** Reduces the size of the inner loop on each pass since the largest elements accumulate at the end.
* **Type-Safe Template:** Supports sorting of any type `T` that provides a valid `operator>`.
* **In-Place & Stable:** Uses O(1) extra space and preserves the relative order of equal elements.
* **Comprehensive Demo:** Includes test cases for integers, presorted arrays, strings, and user input.

---

### Complexity

| Scenario      | Time Complexity | Notes                              |
| ------------- | --------------- | ---------------------------------- |
| Best Case     | O(n)            | Array already sorted (early exit). |
| Average Case  | O(n²)           | Random data distribution.          |
| Worst Case    | O(n²)           | Reverse-sorted array.              |
| **Space**     | O(1)            | In-place sorting.                  |
| **Stability** | Stable          | Maintains order of equal elements. |

---

### Dependencies

* C++11 or later compiler (e.g., `g++`, `clang++`)
* Standard C++ library

---

### Building

```bash
# Compile with g++
g++ -std=c++11 -O2 -o bubble_sort bubble_sort.cpp
```

---

### Running

```bash
# Run the executable\./bubble_sort
```

1. The program will execute predefined test cases (integers, presorted, strings).
2. It will then prompt for a custom array:

   * Enter the number of elements.
   * Enter the elements separated by spaces.
3. It displays the original and sorted arrays.

---

### File Structure

```plaintext
├── bubble_sort.cpp   # Optimized bubble sort implementation
└── README.md         # This documentation file
```

---
