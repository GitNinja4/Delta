// Check whether a number is divisible by both 3 and 5.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter your no. : ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0){
        cout << "yes";
    }else{
        cout << "NO";
    }
    return 0;
}