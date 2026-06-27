// Print an array in reverse order.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int *arr = new int(n);
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = n-1; i >= 0; i--){
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}