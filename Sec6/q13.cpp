// Find the Missing Number from 1 to N


/* 
#include <iostream>
using namespace std;

int findMissing(int arr[], int size, int n)
{
    // Sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;

    // Sum of elements present in the array
    int arraySum = 0;

    for(int i = 0; i < size; i++)
    {
        arraySum += arr[i];
    }

    // Missing number
    return totalSum - arraySum;
}

int main()
{
    int n = 5;

    int arr[] = {1, 2, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing Number = "
         << findMissing(arr, size, n);

    return 0;
}
 */

// Approach 2: XOR Method

#include <iostream>
using namespace std;

int findMissing(int arr[], int size, int n)
{
    int xor1 = 0;
    int xor2 = 0;

    // XOR all numbers from 1 to n
    for(int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }

    // XOR all array elements
    for(int i = 0; i < size; i++)
    {
        xor2 ^= arr[i];
    }

    return xor1 ^ xor2;
}

int main()
{
    int n = 5;

    int arr[] = {1, 2, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << findMissing(arr, size, n);

    return 0;
}