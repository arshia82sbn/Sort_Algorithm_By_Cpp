#include <iostream>
#include <vector>

using namespace std;

using vector;
using swap;
using cout;
using endl;

// Maintains the max-heap property for the subtree rooted at index 'i'
// 'n' is the size of the heap
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;              // Initialize largest as root
    int left = 2 * i + 1;         // left child index
    int right = 2 * i + 2;        // right child index

    // If left child exists and is greater than root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // If right child exists and is greater than current largest
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // If largest is not root, swap and continue heapifying
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Main function to perform heap sort
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Build max-heap from the input array
    for (int i = n / 2 - 1; i >= 0; --i) {
        heapify(arr, n, i);
    }

    // Extract elements one by one from heap
    for (int i = n - 1; i > 0; --i) {
        // Move current root to end
        swap(arr[0], arr[i]);
        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> data = {12, 11, 13, 5, 6, 7};

    cout << "Original array:\n";
    for (int val : data) {
        cout << val << " ";
    }
    cout << endl;

    heapSort(data);

    cout << "Sorted array:\n";
    for (int val : data) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
