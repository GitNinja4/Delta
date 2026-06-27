// Print all even numbers from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "enter the value of n : ";
    cin >> N;

    for (int i=2; i <=N; i+=2){
        cout << i << endl;
    }
    return 0;
}