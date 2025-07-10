
# 📁 Heap Sort Algorithm in C++

A professional and educational implementation of the **Heap Sort** algorithm in C++, with clean code, detailed comments, and interactive user input.

---

## 📌 What is Heap Sort?

**Heap Sort** is a comparison-based sorting technique based on a **Binary Heap** data structure. It’s an **in-place** algorithm (no extra space needed beyond the input array) and has a time complexity of:

- 🕒 **Best Case**: `O(n log n)`  
- 🕒 **Average Case**: `O(n log n)`  
- 🕒 **Worst Case**: `O(n log n)`  
- 🧠 **Space Complexity**: `O(1)` (in-place)  
- ✅ **Stable**: No

The key idea is to build a **max heap** from the input data, then repeatedly extract the maximum element from the heap and rebuild it.

---

## ⚙️ How it Works

1. **Build a Max-Heap** from the input array.  
2. **Swap** the first element (maximum) with the last element.  
3. **Reduce** the heap size by 1.  
4. **Heapify** the root again to maintain heap property.  
5. Repeat until the array is sorted.

🔁 The process ensures the largest element is placed at the end of the array on each pass.

---

## 🧪 Example

Input:
```
Enter number of elements: 6  
Enter 6 integers: 12 11 13 5 6 7  
```

Output:
```
Original array:  
12 11 13 5 6 7  

Sorted array:  
5 6 7 11 12 13  
```

---

## 🛠️ How to Compile and Run

### 🖥️ Using g++ (Linux/Mac/Windows WSL)
```bash
g++ heap_sort.cpp -o heap_sort
./heap_sort
```

### 🪟 Using Windows (Command Prompt)
```bash
g++ heap_sort.cpp -o heap_sort.exe
heap_sort.exe
```

---

## 📂 File Structure

| File Name     | Description                             |
|---------------|-----------------------------------------|
| `heap_sort.cpp` | Main source file containing Heap Sort |
| `README.md`    | This documentation file                |

---

## 📚 References

- 📘 **CLRS**: *Introduction to Algorithms*, Cormen, Leiserson, Rivest, Stein  
- 🌐 [GeeksForGeeks - Heap Sort](https://www.geeksforgeeks.org/heap-sort/)  
- 🌐 [Wikipedia - Heap Sort](https://en.wikipedia.org/wiki/Heapsort)

---

## 🎓 Educational Use

This code is written for students and engineers who want:

- A clean and concise implementation of **Heap Sort**
- English comments for every logical section
- A base to understand and build more complex sorting algorithms