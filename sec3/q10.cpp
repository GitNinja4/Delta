// Determine if a number can be an Armstrong number candidate (number > 0).

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, originalnum, remainder, result = 0, n =0;

    cout << "Enter a no. : ";
    cin >> num;

    originalnum = num;

    // to count no. of digits in the no.
    int temp = num;
    while (temp != 0){
        temp /= 10 ;
        n++;
    }

    temp = num ;

    // handle zero as a special case
    if (originalnum == 0) n = 1;

    // extract each digit, raise to power n using integer arithmetic, and add to result
    while (temp != 0){
        remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < n; ++i) power *= remainder;
        result += power;
        temp /= 10;
    }
    if (result == originalnum)
        cout << originalnum << " is an Armstrong number.";
    else
        cout << originalnum << " is not an Armstrong number.";

    return 0;
}