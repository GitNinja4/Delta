// Function to find cube of a number.

#include <iostream>
using namespace std;

int cube(int);

int main() {
    int value = cube(3);
    cout << value ;       
    return 0;
}
int cube(int a){
    return a*a*a;
}