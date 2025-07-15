
# 🚀 Radix Sort in C++

Welcome to the **Radix Sort** implementation in **C++**!  
This program allows users to input a list of integers and sorts them using the efficient non-comparative **Radix Sort algorithm**. 📊

---

## 📌 About the Algorithm

**Radix Sort** is an integer sorting algorithm that processes individual digits.  
It avoids direct comparisons and sorts numbers by grouping them by each digit, starting from the least significant digit (LSD) to the most significant digit (MSD).  
It’s most efficient when sorting integers with a similar number of digits.

🔧 **Key Features**:
- Time Complexity: `O(nk)` where `k` is the number of digits
- Stable sort ✅
- Non-comparative sorting method
- Suitable for large datasets of integers

---

## 💻 How to Run

1. **Clone or Download** this repository.
2. Open the `radix_sort.cpp` file in your favorite C++ IDE or compile it via command line:

```bash
g++ radix_sort.cpp -o radix_sort
./radix_sort
```

3. **Input Format** (at runtime):

- First, enter the number of integers to sort.
- Then enter each integer on the same line or individually.

✅ **Example**:

```text
Enter the number of elements: 6
Enter 6 integers:
170 45 75 90 802 24
```

📤 **Output**:

```text
Original array:
170 45 75 90 802 24 
Sorted array:
24 45 75 90 170 802 
```

---

## 🧠 Code Structure

- `getMax()`: Finds the maximum element to determine digit count.
- `countSort()`: Performs digit-level counting sort.
- `radixSort()`: Calls `countSort()` for each digit position.
- `main()`: Takes user input, displays input/output arrays.

---

## 🔍 Use Cases

- Sorting telephone numbers 📱
- Sorting large-scale integer data sets 📂
- Efficient preprocessing in data analytics tools 📈

---

## 📚 References

- [Wikipedia - Radix Sort](https://en.wikipedia.org/wiki/Radix_sort)
- [GeeksForGeeks - Radix Sort](https://www.geeksforgeeks.org/radix-sort/)

---
