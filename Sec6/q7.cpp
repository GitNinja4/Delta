// Count frequency of an element.

#include <iostream>
using namespace std;

int main(){
    int arr[5], count ;
    cout << "Enter the no. of array : ";
    for (int i =0 ; i <=4 ; i++){
    cin >> arr[i];
    }
    count = 0;
    int target ;
    cout << "Enter the element to count: ";
    cin >> target;

    for(int i = 0; i <=4 ; i++){
        if(arr[i] == target){
            count ++;
        }
    }
    cout << count ;

}