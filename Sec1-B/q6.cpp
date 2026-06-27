// Calculate area & perimeter of a rectangle.

#include <iostream>
using namespace std;

int main(){
    float length , breadth;

    cout << "Enter length & Breadth : ";
    cin >> length >> breadth ;
    
    float area = (length * breadth) ;
    float peri = 2*(length + breadth) ;

    cout << "Area of Rect. = " << area << endl;
    cout << "perimeter of Rect. = " << peri ;

    
    return 0;
}