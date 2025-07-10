#include <iostream>
#include <vector>
#include <algorithm> // For swap

using namespace std;

/**
 * Selection Sort Algorithm
 * 
 * Characteristics:
 * - Time Complexity: O(n²) in all cases (best/average/worst)
 * - Space Complexity: O(1) (in-place sorting)
 * - Unstable sort (may change relative order of equal elements)
 * - Minimizes swap operations (max n-1 swaps)
 * - Non-adaptive (performance unaffected by input ordering)
 */
template <typename T>
void selectionSort(vector<T>& arr) {
    size_t n = arr.size();
    
    // Iterate through entire array
    for (size_t i = 0; i < n - 1; ++i) {
        size_t minIndex = i;  // Assume current position is minimum
        
        // Find actual minimum in unsorted subarray [i, n-1]
        for (size_t j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update minimum position
            }
        }
        
        // Swap if minimum isn't in current position
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

// Driver demonstration
int main() {
    // Read integers from user
    int n;
    cout << "Enter number of integers: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Integer sorting test
    cout << "Original integer array:\n";
    for (int num : numbers) cout << num << " ";
    cout << "\n";

    selectionSort(numbers);
    cout << "Sorted integer array:\n";
    for (int num : numbers) cout << num << " ";
    cout << "\n";

    // String sorting test (static sample)
    vector<string> words = {"apple", "zebra", "banana", "mango"};
    selectionSort(words);
    cout << "Sorted string array:\n";
    for (auto& word : words) cout << word << " ";
    cout << "\n";

    return 0;
}