// Input n integers and print them.

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
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;


}