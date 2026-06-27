// Find the sum of all elements.

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
    int sum = 0;
    for (int i = n-1; i >= 0; i--){
        sum += arr[i];
    }
    cout << "Sum of all elements : " << sum;

    delete[] arr;
    return 0;
}