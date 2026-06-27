// Take a character and print it.

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char c;
    cout << "Enter you character : ";
    cin >> c;

    if (isalpha(c)){
        cout << "your \"character\" is : " << c ;
    }else{
        cout << "Error: You entered a digit or symbol, not a letter.";
    }
    
    return 0;
}