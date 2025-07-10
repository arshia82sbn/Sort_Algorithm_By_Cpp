#include <iostream>
#include <vector>

using namespace std;

// Counting Sort implementation for non-negative integers
void countingSort(vector<int> &arr)
{
    if (arr.empty())
        return;

    // Find the maximum element to determine range
    int max_val = arr[0];
    for (int num : arr)
    {
        if (num > max_val)
        {
            max_val = num;
        }
    }

    // Initialize count array with all zeros
    vector<int> count(max_val + 1, 0);

    // Store the count of each element
    for (int num : arr)
    {
        ++count[num];
    }

    // Modify count array to store cumulative counts
    for (size_t i = 1; i < count.size(); ++i)
    {
        count[i] += count[i - 1];
    }

    // Build the output array
    vector<int> output(arr.size());
    for (int i = static_cast<int>(arr.size()) - 1; i >= 0; --i)
    {
        int num = arr[i];
        output[count[num] - 1] = num;
        --count[num];
    }

    // Copy sorted elements back to original array
    for (size_t i = 0; i < arr.size(); ++i)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> data(n);
    cout << "Enter " << n << " non-negative integers:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    cout << "Original array:\n";
    for (int val : data)
    {
        cout << val << " ";
    }
    cout << endl;

    countingSort(data);

    cout << "Sorted array:\n";
    for (int val : data)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
