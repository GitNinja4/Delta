// Take name, age, and salary as input and print them.

#include <iostream>
using namespace std;

int main(){
    string name ;
    int age;
    double salary;

    cout << "Enter your name : ";
    cin >> name;

    cout << "Enter your age : ";
    cin >> age;

    cout << "Enter your salary : ";
    cin >> salary;

    cout << "Name : " << name << endl ;
    cout << "Age : " << age << endl ;
    cout << "Salary : " << salary << endl ;

    return 0;
}