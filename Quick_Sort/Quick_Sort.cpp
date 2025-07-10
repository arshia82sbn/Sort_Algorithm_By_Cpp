#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

/**
 * Merge Sort Algorithm
 *
 * Characteristics:
 * - Time Complexity: O(n log n) in all cases
 * - Space Complexity: O(n) (not in-place)
 * - Stable sort (preserves relative order of equal elements)
 * - Suitable for large datasets and external sorting
 */
template <typename T>
void mergeSort(typename vector<T>::iterator begin,
               typename vector<T>::iterator end)
{
    size_t size = distance(begin, end);
    if (size <= 1)
        return;

    auto mid = begin + size / 2;

    // Recursively sort left and right partitions
    mergeSort<T>(begin, mid);
    mergeSort<T>(mid, end);

    // Merge sorted partitions
    vector<T> temp;
    temp.reserve(size);

    auto left = begin;
    auto right = mid;

    while (left != mid && right != end)
    {
        temp.push_back((*left <= *right) ? *left++ : *right++);
    }

    temp.insert(temp.end(), left, mid);
    temp.insert(temp.end(), right, end);
    move(temp.begin(), temp.end(), begin);
}

// Utility wrapper for easier calling
template <typename T>
void mergeSort(vector<T> &arr)
{
    mergeSort<T>(arr.begin(), arr.end());
}

int main()
{
    // Read integer list from user
    cout << "Enter number of integers to sort: ";
    int n;
    cin >> n;
    vector<int> numbers(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    // Sort and display integer list
    mergeSort(numbers);
    cout << "Sorted integers:\n";
    for (int num : numbers)
        cout << num << " ";
    cout << "\n";

    // Read string list from user
    cout << "Enter number of words to sort: ";
    int m;
    cin >> m;
    vector<string> words(m);
    cout << "Enter " << m << " words:\n";
    for (int i = 0; i < m; ++i)
    {
        cin >> words[i];
    }

    // Sort and display word list
    mergeSort(words);
    cout << "Sorted words:\n";
    for (const auto &word : words)
        cout << word << " ";
    cout << endl;
    // Read float list from user
    cout << "Enter number of float numbers to sort: ";
    int f;
    cin >> f;
    vector<float> floats(f);
    cout << "Enter " << f << " float numbers:\n";
    for (int i = 0; i < f; ++i)
    {
        cin >> floats[i];
    }

    // Sort and display float list
    mergeSort(floats);
    cout << "Sorted float numbers:\n";
    for (float val : floats)
        cout << val << " ";
    cout << endl;

    return 0;
}