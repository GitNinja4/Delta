// Check if a number is even or odd using %.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter you no. : ";
    cin >> num; 

    if (num % 2 == 0 ){
        cout << "Even";
    }else{
        cout << "NOt even";
    }
    return 0;
}