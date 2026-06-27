// Count even and odd numbers.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int countE = 0;
    int countO = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            countE++;
        }else{
            countO++;
        }
    }

    cout << "count of Even no. : " << countE << endl;
    cout << "count of odd no. : " << countO << endl;

    delete[] arr;
    return 0;
}