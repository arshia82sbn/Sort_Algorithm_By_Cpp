#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
 * Shell Sort with Ciura Gap Sequence
 * 
 * Characteristics:
 * - Time Complexity: O(n^(3/2)) to O(n log² n) depending on gap sequence
 * - Space Complexity: O(1) (in-place)
 * - Unstable sort (may change relative order of equal elements)
 * - Adaptive (faster for partially sorted data)
 * - Efficient for medium-sized arrays (n ≤ 10000)
 */
template <typename T>
void shellSort(vector<T>& arr) {
    const int n = arr.size();
    if (n <= 1) return;

    // Ciura gap sequence (optimized for performance)
    static constexpr int ciura_gaps[] = {701, 301, 132, 57, 23, 10, 4, 1};
    const int ciura_size = sizeof(ciura_gaps) / sizeof(ciura_gaps[0]);
    
    // Generate optimal gap sequence
    vector<int> gaps;
    int base_gap = 1;
    
    // Dynamic gap calculation
    for (; base_gap <= n/9; base_gap = base_gap * 3 + 1);
    for (int g = base_gap; g > 0; g /= 3) {
        gaps.push_back(g);
    }
    
    // Add Ciura gaps for better performance
    for (int g : ciura_gaps) {
        if (g <= n) gaps.push_back(g);
    }
    
    // Sort using generated gaps
    for (int gap : gaps) {
        for (int i = gap; i < n; ++i) {
            T temp = arr[i];
            int j = i;
            
            // Shift elements until correct position found
            for (; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    // Read integer list from user
    cout << "Enter number of integers to sort: ";
    int n;
    cin >> n;
    vector<int> numbers(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // Sort and display integer list
    shellSort(numbers);
    cout << "Sorted integers:\n";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    // Read string list from user
    cout << "Enter number of words to sort: ";
    int m;
    cin >> m;
    vector<string> words(m);
    cout << "Enter " << m << " words:\n";
    for (int i = 0; i < m; ++i) {
        cin >> words[i];
    }

    // Sort and display word list
    shellSort(words);
    cout << "Sorted words:\n";
    for (const auto& word : words) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
