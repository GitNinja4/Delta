// Reverse array.

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}