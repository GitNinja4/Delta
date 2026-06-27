// Remove duplicates from sorted array.

#include <iostream>
using namespace std;

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int n)
{
    // If array is empty, no elements exist
    if (n == 0)
    {
        return 0;
    }

    // i points to the last unique element
    int i = 0;

    // j scans the remaining array
    for (int j = 1; j < n; j++)
    {
        // Found a new unique element
        if (arr[i] != arr[j])
        {
            i++;                // Move to next position
            arr[i] = arr[j];    // Store unique element
        }
    }

    // Number of unique elements
    return i + 1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    cout << "Unique Elements: ";

    // Print only the unique portion
    for (int i = 0; i < newLength; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "New Length = " << newLength;

    return 0;
}