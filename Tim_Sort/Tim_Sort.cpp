#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

constexpr int MIN_MERGE = 32;

// Calculate minimum run length for Timsort
int calcMinRun(int n) {
    int r = 0;
    while (n >= MIN_MERGE) {
        r |= n & 1;
        n >>= 1;
    }
    return n + r;
}

// Insertion sort for subarrays
template <typename T>
void insertionSort(vector<T>& arr, int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        T key = arr[i];
        int j = i - 1;
        while (j >= left && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Merge adjacent runs
template <typename T>
void merge(vector<T>& arr, int l, int m, int r) {
    int len1 = m - l + 1;
    int len2 = r - m;

    vector<T> left(arr.begin() + l, arr.begin() + m + 1);
    vector<T> right(arr.begin() + m + 1, arr.begin() + r + 1);

    int i = 0, j = 0, k = l;

    while (i < len1 && j < len2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < len1) arr[k++] = left[i++];
    while (j < len2) arr[k++] = right[j++];
}

// Timsort main algorithm
template <typename T>
void timSort(vector<T>& arr) {
    int n = arr.size();
    if (n < 2) return;

    int minRun = calcMinRun(n);

    for (int i = 0; i < n; i += minRun) {
        insertionSort(arr, i, min(i + minRun - 1, n - 1));
    }

    for (int size = minRun; size < n; size = 2 * size) {
        for (int left = 0; left < n; left += 2 * size) {
            int mid = left + size - 1;
            int right = min(left + 2 * size - 1, n - 1);

            if (mid < right) {
                merge(arr, left, mid, right);
            }
        }
    }
}

int main() {
    // User input for integers
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    timSort(nums);
    cout << "Sorted integers:\n";
    for (int num : nums) cout << num << " ";
    cout << "\n";

    // String test
    vector<string> words = {"timsort", "cpp", "algorithm", "sort", "hybrid"};
    timSort(words);
    cout << "Sorted strings:\n";
    for (auto& word : words) cout << word << " ";
    cout << endl;

    return 0;
}