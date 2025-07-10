# 🧮 Counting Sort in C++

Welcome to the **Counting Sort** implementation in C++! 🚀  
This program is designed to sort a list of **non-negative integers** efficiently using the **Counting Sort** algorithm. It is particularly suitable for sorting large datasets with a limited range of integers.

---

## 📌 What is Counting Sort?

Counting Sort is a **non-comparative sorting algorithm** that works by:

1. Counting the occurrences of each element.
2. Calculating the positions of elements.
3. Placing them in the output array accordingly.

✅ Time Complexity:  
- Best, Average, Worst: **O(n + k)**  
  where `n` is the number of elements, and `k` is the range of input.

✅ Space Complexity:  
- **O(n + k)** extra space used for counting and output arrays.

✅ Stable Sort (preserves the order of equal elements).

---

## 📂 File Structure

```bash
counting_sort/
├── counting_sort.cpp    # 💻 Main C++ source code file
├── README.md            # 📄 You're here!
```

---

## 🛠️ How to Use

### 🔧 Compilation

Use a C++ compiler like `g++`:

```bash
g++ counting_sort.cpp -o counting_sort
```

### ▶️ Execution

Run the program:

```bash
./counting_sort
```

### 🧑‍💻 Sample Interaction

```
Enter number of elements: 5
Enter 5 non-negative integers:
4 2 2 8 3
Original array:
4 2 2 8 3 
Sorted array:
2 2 3 4 8
```

---

## 📌 Notes

- ⚠️ Only **non-negative integers** are supported.
- If the input is empty, the program exits safely.
- The sort is **stable** and **efficient** for small ranges.
