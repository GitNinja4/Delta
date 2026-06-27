// Check if array is sorted.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {4, 5, 9, 7, 9};
    bool sorted = true;

    for (int i = 0; i < 4; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}