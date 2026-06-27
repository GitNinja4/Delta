// Take input two integers and print their sum, difference, product, quotient, and remainder.

#include <iostream>
using namespace std;

int main(){
    int a1 , a2;

    cout << "Enter you no. :" ;
    cin >> a1 >> a2 ;

    cout << "sum = " << (a1 + a2) << endl;
    cout << "Diff = " << (a1 - a2) << endl;
    cout << "Product = " << (a1 * a2) << endl;
    cout << "Quotient = " << (a1 / a2) << endl;
    cout << "Remainder = " << (a1 % a2) ;

    return 0;
}