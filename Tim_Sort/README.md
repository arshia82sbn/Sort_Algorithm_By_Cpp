# Timsort C++ Implementation

This project contains a complete and professional C++ implementation of the **Timsort** algorithm. Timsort is a hybrid stable sorting algorithm derived from merge sort and insertion sort. It is used in Python and Java standard libraries due to its impressive performance on real-world data.

---

## 📂 File Structure

```
├── timsort_input.cpp      # Main source file with Timsort logic and input handling
├── README.md              # This file
```

---

## 🚀 Features

* Full implementation of Timsort in C++
* Supports sorting of both `int` and `std::string` types
* Includes user input for integer values
* Displays original and sorted data
* Uses templates for type generalization

---

## 🧠 Algorithm Overview

### 🔹 Insertion Sort

Used for sorting small segments (runs) of the array, as it performs better on small datasets.

### 🔹 Merge

Merges the sorted segments in a stable way, similar to traditional merge sort.

### 🔹 Timsort Strategy

1. Compute a minimum run size.
2. Break the array into sorted runs using insertion sort.
3. Merge the runs using a strategy that balances size and performance.

---

## 🛠️ How to Compile

You can compile the code using any modern C++ compiler. For example, using `g++`:

```bash
g++ -std=c++17 -O2 timsort_input.cpp -o timsort
```

---

## 📥 Sample Input & Output

### 🧑 Input

```
Enter number of elements: 5
Enter 5 integers:
9 2 4 7 1
```

### 📤 Output

```
Sorted integers:
1 2 4 7 9
Sorted strings:
algorithm cpp hybrid sort timsort
```

---

## 📌 Notes

* The integer list is entered manually by the user at runtime.
* String sorting is demonstrated using a fixed vector.
* The `constexpr int MIN_MERGE = 32;` value is based on Python's implementation.

---

## 📚 References

* Tim Peters' Timsort: [https://en.wikipedia.org/wiki/Timsort](https://en.wikipedia.org/wiki/Timsort)
* Python's source code: [https://github.com/python/cpython/blob/main/Objects/listsort.txt](https://github.com/python/cpython/blob/main/Objects/listsort.txt)

---
