// Check if a number is palindrome.

#include <iostream>
using namespace std;

int main(){
    int num, OriginalNum , reversed;
    cout << "Enter your no. : ";
    cin >> num;

    OriginalNum = num;
    reversed = 0 ;

    while (num > 0){
        int digit = num % 10 ;
        reversed = reversed * 10 + digit ;
        num = num / 10 ;

    }
    if ( OriginalNum == reversed){
        cout << "yes";

    }else{
        cout << " No";
    }
    return 0;
}