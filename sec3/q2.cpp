// Check whether a number is even or odd.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<" num = ";
    cin >> num;

// Method 1 

    /* 
    if (num % 2 == 0){
        cout << "Even";
    }else {
        cout << "Odd";
    } */

// Method 2

    // cout << ((num % 2 == 0) ? "Even" : "Odd");

// Method 3

    (num % 2 == 0) ? cout << "Even" : cout << "Odd" ;
    return 0;
}