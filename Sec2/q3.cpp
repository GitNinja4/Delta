// Print the last digit of a number.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter you no. : ";
    cin >> num ;

    int lastDigit = num % 10;

    cout << "last digit of the num is : " << lastDigit ;
    return 0;
}
