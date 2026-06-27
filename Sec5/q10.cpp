// Function to find sum of digits.

#include <iostream>
using namespace std;

int sumDig(int num){

    int sum = 0;

    while (num > 0){
        int digit = num % 10;

        sum += digit;

        num /= 10;
    }
    return sum;
}
int main (){
    int value = sumDig(5673);
    cout << value;
    return 0;
}