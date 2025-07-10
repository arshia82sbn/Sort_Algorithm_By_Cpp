/**
 * Optimized Bubble Sort Algorithm with Comprehensive Documentation
 * 
 * Features:
 *  - Early termination when array is sorted
 *  - Adaptive: reduces inner loop on each pass
 *  - Type-safe template implementation
 *  - Detailed performance annotations
 * 
 * Time Complexity:
 *  - Best:     O(n)   [Array already sorted]
 *  - Average:  O(n²)
 *  - Worst:    O(n²)  [Array reverse sorted]
 * 
 * Space Complexity: O(1) [In-place sorting]
 * Stability: Stable (preserves original order of equal elements)
 */

#include <iostream>
#include <vector>
#include <utility> // For swap

using namespace std;

template <typename T>
void bubbleSort(vector<T>& arr) {
    // Early return for trivial cases
    if (arr.empty() || arr.size() == 1) return;

    bool swapped;
    size_t n = arr.size();

    for (size_t i = 0; i < n - 1; ++i) {
        swapped = false;  // Reset flag before each pass
        size_t innerLoopBound = n - i - 1;  // Reduce inner loop range progressively

        for (size_t j = 0; j < innerLoopBound; ++j) {
            // Compare adjacent elements with strong ordering
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  // Standard library swap
                swapped = true;  // Mark swap occurrence
            }
        }

        // Early termination optimization: no swaps = array sorted
        if (!swapped) break;
    }
}

// Demonstration with test cases
int main() {
    // Test Case 1: Random integers
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(numbers);
    cout << "Sorted Integers: ";
    for (int num : numbers) cout << num << " ";
    cout << "\n\n";

    // Test Case 2: Pre-sorted array (best-case scenario)
    vector<int> presorted = {1, 2, 3, 4, 5};
    bubbleSort(presorted);
    cout << "Pre-sorted Array: ";
    for (int num : presorted) cout << num << " ";
    cout << "\n\n";

    // Test Case 3: Strings (demonstrates template capability)
    vector<string> words = {"apple", "zebra", "banana", "mango"};
    bubbleSort(words);
    cout << "Sorted Strings: ";
    for (const auto& word : words) cout << word << " ";

    // Test Case 4: User input array
    vector<int> userArray;
    int numElements, element;

    cout << "\n\nTest Case 4: User Input Array\n";
    cout << "Enter number of elements: ";
    cin >> numElements;

    if (numElements <= 0) {
        cout << "Invalid size! Using default array instead.\n";
        userArray = {5, 2, 8, 1, 4};
    } else {
        cout << "Enter " << numElements << " integers separated by spaces:\n";
        for (int i = 0; i < numElements; ++i) {
            cin >> element;
            userArray.push_back(element);
        }
    }

    cout << "Original Array: ";
    for (int num : userArray) cout << num << " ";

    bubbleSort(userArray);

    cout << "\nSorted Array: ";
    for (int num : userArray) cout << num << " ";
    cout << "\n";

    return 0;
}