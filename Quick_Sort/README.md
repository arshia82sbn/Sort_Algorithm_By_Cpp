
# 🧠 Merge Sort in C++ — Generic & Powerful

This project demonstrates a **highly reusable** and **generic** implementation of the classic 🧩 **Merge Sort** algorithm in C++. It's capable of sorting:

- 🔢 Integers
- ✍️ Strings
- 🔣 Floats

All with one universal sort function, thanks to the power of **templates** and **iterators**!

---

## 🚀 Features

✅ Generic template-based sorting  
✅ Works with any type supporting `<=` operator  
✅ Sorts `vector<T>` directly  
✅ Accepts user input for integers, strings, and floats  
✅ Implements **Merge Sort**, which is:

- 🕒 Time Complexity: `O(n log n)` in all cases  
- 🧠 Space Complexity: `O(n)` (not in-place)  
- 🧬 Stable (preserves order of equal elements)  
- 💼 Suitable for large datasets and external sorting

---

## 📂 File Structure

```
📁 MergeSort/
├── main.cpp      # The main program with generic merge sort
└── README.md     # This file
```

---

## 📥 How to Use

### 🧑‍💻 Compile

```bash
g++ -std=c++11 -o mergesort main.cpp
```

### ▶️ Run

```bash
./mergesort
```

### ⌨️ Example Input

```text
Enter number of integers to sort: 5
23 11 45 8 19

Enter number of words to sort: 4
banana apple cherry date

Enter number of float numbers to sort: 3
3.14 1.41 2.71
```

### 📤 Example Output

```text
Sorted integers:
8 11 19 23 45

Sorted words:
apple banana cherry date

Sorted float numbers:
1.41 2.71 3.14
```

---

## 🔧 Built With

- Language: **C++11**
- STL Containers: `vector`, `iterator`, `string`
- Input/Output: `cin`, `cout`