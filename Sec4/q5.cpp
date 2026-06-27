// Count digits in a number.

#include <iostream>
using namespace std;

int main(){

// using while 

/*     
    int num , count;
    cout << "Enter your no. : ";
    cin >> num;
    count = 0;

    while (num>0){
        num /=10;
        count ++;
    }
    cout << count ;
 */

// using for loop

    int num, count;
    cout << "Enter no. : ";
    cin >> num ;

    if (num == 0){
        cout << "Digit no. : 1" ;
        return 0;
    }

    int temp = abs(num);
    count = 0;
    for (; temp > 0 ; temp/=10){
        count++;
    }
    cout << count ;
    return 0;
}