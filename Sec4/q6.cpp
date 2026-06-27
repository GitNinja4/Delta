// sum of digits

#include <iostream>
using namespace std;

int main(){
    int N , sum;
    cout << "enter the value of n : ";
    cin >> N;

    sum = 0;

    while (N > 0){
        int digit = N % 10 ;

        sum += digit;

        N /= 10;
    }
    cout << sum ;
    return 0;
}