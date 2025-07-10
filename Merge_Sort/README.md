**Merge Sort C++ Implementation**

**Overview**

This repository provides a high-performance, stable Merge Sort implementation in C++ using template-based iterators. It supports sorting of arbitrary types (e.g., integers, strings) and efficiently handles large datasets with O(n log n) time complexity.

---

**Features**

* **Generic**: Template-based, works with any comparable data type.
* **Stable**: Preserves the relative order of equal elements.
* **Efficient**: O(n log n) time complexity in all cases, suitable for large data.
* **User Input**: Reads integer arrays from standard input and displays sorted results.

---

**Directory Structure**

```
/ (root)
├── merge_sort.cpp    # Main source file
├── README.md         # Project documentation
└── Makefile          # Build instructions (optional)
```

---

**Dependencies**

* C++11 or later
* Standard C++ Library

---

**Compilation**

Use any modern C++ compiler. For example, with `g++`:

```bash
# Compile merge_sort.cpp into an executable
g++ -std=c++11 -O2 merge_sort.cpp -o merge_sort
```

---

**Usage**

1. Run the executable:

   ```bash
   ./merge_sort
   ```
2. Follow the prompts:

   * Enter the number of elements.
   * Enter each integer separated by whitespace or newline.
3. View the sorted integer list.

Example:

```bash
$ ./merge_sort
Enter number of elements to sort: 5
Enter 5 integers:
3 1 4 5 2
Sorted integers:
1 2 3 4 5
Sorted words:
algorithm implementation merge sort
```

---

**Customization**

* To remove or modify the built-in string sorting test, edit the `main` function in `merge_sort.cpp`.
* To adapt for other data types, provide a `std::vector<T>` and call the `mergeSort` template wrapper.

---