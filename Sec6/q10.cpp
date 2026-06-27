// Find second largest element.

#include <iostream>
#include <climits>   // For INT_MIN
using namespace std;

int secondLargest(int arr[], int n)
{
    // If array has less than 2 elements,
    // second largest doesn't exist
    if (n < 2)
        return INT_MIN;

    // Assume first element is the largest initially
    int largest = arr[0];

    // Initialize second largest with minimum possible integer
    int secondLargest = INT_MIN;

    // Traverse the array starting from index 1
    for (int i = 1; i < n; i++)
    {
        // Found a new largest element
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }

        // Update second largest only if:
        // 1. Current element is smaller than largest
        // 2. Current element is greater than current secondLargest
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int arr[] = {10, 50, 30, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = secondLargest(arr, n);

    if (ans == INT_MIN)
        cout << "No second largest element";
    else
        cout << "Second Largest = " << ans;

    return 0;
}