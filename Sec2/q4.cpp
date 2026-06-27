// Input age and check if age is between 18 and 60 using &&.

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (age > 18 && age < 60){
        cout << "Age is between them.";
    }else{
        cout << "Not in the range.";
    }
    return 0;
}