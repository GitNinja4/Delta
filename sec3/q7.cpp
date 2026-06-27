// Create a simple calculator using switch.

#include <iostream>
using namespace std;

int main(){
    double a , b;
    char op;

    cout << "Enter Expression (e.g. a + b) : ";
    cin >> a >> op >> b;

    switch (op){
        case '+':
            cout << a << " + " << b << " = " << (a + b) << "\n";
            break;
        case '-':
            cout << a << " - " << b << " = " << (a - b) << "\n";
            break;
        case '*':
            cout << a << " * " << b << " = " << (a * b) << "\n";
            break;
        case '/':
            if (b != 0)
                cout << a << " / " << b << " = " << (a / b) << "\n";
            else
                cout << "Error: division by zero\n";
            break;
        default:
            cout << "Unknown operation\n";
            break;
    }

    return 0;
}