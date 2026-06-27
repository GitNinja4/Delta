// Check whether a number is a 2-digit, 3-digit, or 4-digit number.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int num;
    cout << "Enter a no. : ";
    cin >> num;
    
// Method 1

    /* 
    int n = abs(num);

    if (n >= 10 && n <= 99) {
        cout << "2-digit number\n";
    }else if (n >= 100 && n <= 999) {
        cout << "3-digit number\n";
    }else if (n >= 1000 && n <= 9999) {
        cout << "4-digit number\n";
    }else {
        cout << "Not from them.";
    } */

//Method 2

    /* 
    int n = abs(num);
    int digits = 0;

    if (n == 0) {
        digits = 1;
    } else {
        while (n > 0) {
            n /= 10;
            digits++;
        }
    }

    if (digits == 2) {
        cout << "2-digit number\n";
    } else if (digits == 3) {
        cout << "3-digit number\n";
    } else if (digits == 4) {
        cout << "4-digit number\n";
    } else {
        cout << "Not from them.";
    } */

//Method 3 - using string 

    string s = to_string(abs(num));

    if (s.length() == 2) cout << "2-digit number\n";
    else if (s.length() == 3) cout << "3-digit number\n";
    else if (s.length() == 4) cout << "4-digit number\n";
    else cout << "Not from them";

    return 0;
}