// Take radius and print area of a circle.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius , area ;
    
    const double pi = 3.14;

    cout << "Enter the radius : " ;
    cin >> radius;

    area = pi* pow(radius ,2);

    cout << "Area of Circle : " << area ;

    return 0;
}