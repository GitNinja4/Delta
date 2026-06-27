// Linear search.
/* 
#include <iostream>
using namespace std;

int main(){
    int arr[5], target;
    cout << "Enter the elements of array : ";
    for (int i =0; i<=4 ;i++){
        cin >> arr[i];
    }
    cout << "Enter Target element : ";
    cin >> target ;

    bool found = false;

    for (int i = 0; i <=4 ; i++){
        if (arr[i] == target){
            found = true ;
            break;
        }
    }
    cout << found ;


} */


// Linear search.

#include <iostream>
using namespace std;

int main(){
    int arr[5], target;
    cout << "Enter the elements of array : ";
    for (int i = 0; i <= 4; i++){
        cin >> arr[i];
    }
    cout << "Enter Target element : ";
    cin >> target;

    bool found = false;
    int foundIndex = -1; // Added a variable to remember WHERE we found it

    for (int i = 0; i <= 4; i++){
        if (arr[i] == target){
            found = true;
            foundIndex = i; // Save the current index
            break;
        }
    }

    
    if (found) {
        cout << "Element found at index: " << foundIndex << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0; // Good practice to include this at the end of main()
}
