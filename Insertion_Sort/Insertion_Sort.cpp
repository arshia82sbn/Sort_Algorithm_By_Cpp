#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Insertion Sort Algorithm
 * 
 * Characteristics:
 * - Time Complexity: 
 *    Best: O(n)   (already sorted)
 *    Average/Worst: O(n²)
 * - Space Complexity: O(1) (in-place)
 * - Stable sort (preserves relative order of equal elements)
 * - Adaptive (efficient for partially sorted datasets)
 * - Efficient for small datasets (n ≤ 100)
 */
template <typename T>
void insertionSort(vector<T>& arr) {
    size_t n = arr.size();
    
    // Start from second element (index 1)
    for (size_t i = 1; i < n; ++i) {
        T key = arr[i];  // Current element to insert
        size_t j = i;    // Start at current position
        
        // Shift elements greater than key to the right
        while (j > 0 && key < arr[j - 1]) {
            arr[j] = arr[j - 1];  // Move larger element forward
            --j;
        }
        
        // Insert key at correct position
        arr[j] = key;
    }
}

// Driver demonstration
int main() {
    // --- Read integer sequence from user ---
    cout << "Enter number of integers: ";
    int n;
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter " << n << " integer values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Sort and display user-input integers
    insertionSort(numbers);
    cout << "Sorted integers:\n";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n\n";

    // --- String sorting test ---
    vector<string> words = {"insertion", "sort", "algorithm", "cpp"};
    insertionSort(words);
    cout << "Sorted strings:\n";
    for (const auto& word : words) {
        cout << word << " ";
    }
    cout << "\n";

    return 0;
}