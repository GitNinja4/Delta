// Find Minimum element.


#include <iostream>
using namespace std;

int main(){
    int arr[5];
    

    for (int i = 0 ; i <= 4; i++){
        cin >> arr[i];
    }
    int minimum = arr[0];

    for(int i = 0; i <= 4; i++)
    {
    if(arr[i] < minimum)
    {
        minimum = arr[i];
    }
}
    cout << "Min no. : " << minimum << endl ;
    return 0;
}