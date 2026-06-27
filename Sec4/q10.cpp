// Check if a number is prime.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter your no. : ";
    cin >> num;

    
    if (num <= 1) {
        cout << "Not prime" << endl;
        return 0; 
    }

    bool isPrime = true; 

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false; 
            break;           
        }
    }

    if (isPrime) {
        cout << "prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }

    return 0;
}
