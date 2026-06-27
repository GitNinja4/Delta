// Find sum of first N natural numbers.

#include <iostream>
using namespace std;

int main(){
    int N , sum;
    cout << "enter the value of n : ";
    cin >> N;
    sum = 0;

    for (int i=1; i <=N; i++){
        sum +=i;
    }
    cout << sum ;
    
    return 0;
}