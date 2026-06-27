// Check if a character is vowel or consonant.

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character : ";
    cin >> ch ;
    
// Method 1

    /* 
    if (!isalpha(ch)){
        cout << ch << " is not an alphabet.";
    }else{
        char lower = tolower(ch);
        if (lower =='a' || lower =='e' || lower =='i' || lower =='o' || lower =='u'){
            cout << ch << " is a vowel" << endl;
        }else {
            cout << ch << " is a consonant." << endl;
        }
    } */

// Method 2

    if (!isalpha(static_cast<unsigned char>(ch))) {
    cout << ch << " is not an alphabet.";
    }else{
        switch (ch){
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            cout << ch << " is a vowel." << endl ;
            break;
        default:
            cout << ch << " is a consonant." << endl ;
        }
    }

    return 0;
}