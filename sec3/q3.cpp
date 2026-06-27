// Find maximum of two numbers.

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter your num : ";
    cin >> a >> b ;

// method 1 

    /* 
    if (a > b){
        cout << a ;
    }else {
        cout << b;
    } */

// Method 2

    cout << ((a > b) ? a : b );

    return 0;
}