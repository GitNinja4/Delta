// Find maximum of three numbers.

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter your no. : ";
    cin >> a >> b >> c ;

//Method 1

    /* 
    if(a > b && a > c){
        cout << a;
    }
    else if(b > c){
        cout << b;
    }
    else{
        cout << c;
    } */

//Method 2
    /* 
    int max_ab = (a > b) ? a : b;
    int max_abc = (max_ab > c) ? max_ab : c;
    cout << max_abc; */

//Method 3 - using algorithm

    cout << max(max(a,b), c) ;

    return 0;
}