
# 📂 Bucket Sort in C++

---

## 📌 Description  
This project implements the **Bucket Sort** algorithm in C++ for sorting floating-point numbers in the range **[0, 1)**.

Bucket Sort is especially efficient when the input is uniformly distributed. Each value is placed into a bucket, sorted individually, and then concatenated to form the final sorted array.

---

## 🚀 Features
- 🧮 Accepts user-defined input size
- 🔢 Accepts floating-point numbers between `0` and `1`
- 🪣 Places elements into appropriate buckets
- 📊 Sorts individual buckets using `std::sort`
- 📦 Outputs sorted list of numbers

---

## 🧠 Algorithm Steps
1. 📥 Take number of elements and the elements themselves as input
2. 🪣 Create `n` empty buckets
3. 🔗 Distribute each input value into a bucket based on its value
4. 🧹 Sort each bucket using C++'s built-in `sort()`
5. 🔄 Merge all buckets to get the final sorted array

---

## 🛠️ How to Compile & Run
```bash
g++ -o bucket_sort bucket_sort.cpp
./bucket_sort
```

---

## 📥 Sample Input
```
Enter number of floating-point elements (in range [0, 1)): 5
Enter 5 float values between 0 and 1:
0.42
0.23
0.89
0.34
0.12
```

## 📤 Sample Output
```
Original array:
0.42 0.23 0.89 0.34 0.12
Sorted array:
0.12 0.23 0.34 0.42 0.89
```

---

## 📁 File Structure
```
├── bucket_sort.cpp   # Main source file
├── README.md         # Project documentation (you are here!)
```

---

## 🔍 When to Use Bucket Sort?
✅ When dealing with **uniformly distributed floating-point numbers**  
✅ When you want a **linear-time sort (O(n))** under ideal conditions  
❌ Not suitable for large ranges or non-uniform data without modification

---

## 👨‍💻 Author
Created with 💻 by **Arshia Saberian**
