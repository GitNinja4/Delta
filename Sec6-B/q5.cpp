// Find the maximum element.

#include <iostream>;
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
    

    delete[] arr;
    return 0;
}