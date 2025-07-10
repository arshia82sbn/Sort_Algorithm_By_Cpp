#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// A utility function to get maximum value in arr
int getMax(const vector<int>& arr) {
    int mx = arr[0];
    for (int num : arr) {
        mx = max(mx, num);
    }
    return mx;
}

// Performs counting sort of arr according to digit represented by exp
void countSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    int count[10] = {0};

    for (int i = 0; i < n; ++i) {
        int digit = (arr[i] / exp) % 10;
        ++count[digit];
    }

    for (int i = 1; i < 10; ++i) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; --i) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        --count[digit];
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
}

// Main Radix Sort function
void radixSort(vector<int>& arr) {
    int m = getMax(arr);
    for (int exp = 1; m / exp > 0; exp *= 10) {
        countSort(arr, exp);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> data(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
    }

    cout << "Original array:\n";
    for (int val : data) {
        cout << val << " ";
    }
    cout << endl;

    radixSort(data);

    cout << "Sorted array:\n";
    for (int val : data) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
