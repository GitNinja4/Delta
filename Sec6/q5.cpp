// Count even numbers.

#include <iostream>
using namespace std;

int main(){
    int arr[5];
    for (int i = 0 ; i <= 4; i++){
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0 ; i <= 4; i++){
        if (arr[i] % 2 == 0){
            count ++;
        }
    }
    cout << count ;
    return 0;

}