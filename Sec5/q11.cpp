// Function to print all divisors.

#include <iostream>
using namespace std;

void divSum(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int num;
    cout << "ENter your no. : ";
    cin >> num;
    divSum(num);
    return 0;
}



/* 
#include <bits/stdc++.h>
using namespace std;

vector<int> getDivisors(int n) {
    vector<int> small, large;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            small.push_back(i);
            if (i != n / i) large.push_back(n / i);
        }
    }
    small.insert(small.end(), large.rbegin(), large.rend());
    return small;
}

int main() {
    int num;
    cout << "Enter your no. : ";
    if (!(cin >> num)) return 0;
    auto divs = getDivisors(num);
    for (int d : divs) cout << d << " ";
    return 0;
}
*/