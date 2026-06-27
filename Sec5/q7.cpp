// Function to count digits.

#include <iostream>
using namespace std;

int digCount(int a)
{
    if (a == 0)
        return 1;
    a = abs(a);
    int count = 0;
    while (a > 0)
    {
        count++;
        a /= 10;
    }
    return count;
}

int main()
{
    int value = digCount(121);
    cout << value;

    return 0;
}