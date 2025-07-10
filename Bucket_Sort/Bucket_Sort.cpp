#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Bucket Sort implementation for floating-point numbers in range [0, 1)
void bucketSort(vector<float> &arr)
{
    int n = arr.size();

    // Create n empty buckets
    vector<vector<float>> buckets(n);

    // Put array elements into different buckets
    for (float value : arr)
    {
        int index = static_cast<int>(n * value);
        buckets[index].push_back(value);
    }

    // Sort individual buckets
    for (auto &bucket : buckets)
    {
        sort(bucket.begin(), bucket.end());
    }

    // Concatenate all buckets into arr
    int idx = 0;
    for (const auto &bucket : buckets)
    {
        for (float value : bucket)
        {
            arr[idx++] = value;
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of floating-point elements (in range [0, 1)): ";
    cin >> n;

    vector<float> data(n);
    cout << "Enter " << n << " float values between 0 and 1:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    cout << "Original array:\n";
    for (float num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    bucketSort(data);

    cout << "Sorted array:\n";
    for (float num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
