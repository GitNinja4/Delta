// Move all zeros to end.

#include <iostream>
using namespace std;

// Function to move all zeros to the end
void moveZeros(int arr[], int n)
{
    // j stores the position where the next non-zero element
    // should be placed
    int j = 0;

    // Traverse the array
    for (int i = 0; i < n; i++)
    {
        // If current element is non-zero
        if (arr[i] != 0)
        {
            // Swap current element with arr[j]
            swap(arr[i], arr[j]);

            // Move j to the next position
            j++;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12};

    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeros(arr, n);

    cout << "Array after moving zeros: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}