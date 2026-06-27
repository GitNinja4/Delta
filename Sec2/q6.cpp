// Digits: Count, Reverse, & Palindrome

#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1;

    if (n < 0) n = -n ;

    int count = 0;
    while ( n > 0){
        n = n/10;
        count ++;
    }
    return count;
}

int reverseNumber(int n) {
    int reversed = 0;

    while (n != 0 ){
        int digit = n % 10;

        reversed = (reversed * 10) + digit;
        n = n / 10;
    }
    return reversed;
}

bool isPalindrome(int n) {
    
    if (n < 0) return false;

    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = (reversed * 10) + digit;
        n = n / 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter you no. : ";
    cin >> num ;
    
    cout << "Digits: " << countDigits(num) << endl;
    cout << "Reversed: " << reverseNumber(num) << endl;
    cout << "Is Palindrome: " << (isPalindrome(num) ? "Yes" : "No") << endl;

    return 0;
}