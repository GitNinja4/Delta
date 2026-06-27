// Check whether a number is positive or negative.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter your num : ";
    cin >> num ;

    if (num >=0){
        cout << "Positive";
    }else{
        cout << "Negative";
    }
    return 0;
}