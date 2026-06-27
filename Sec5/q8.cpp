// Function to reverse a number.

#include <iostream>
using namespace std;

int reverse(int a)
{
    int rev = 0;
    while (a != 0)
    {
        int reminder = a % 10;
        rev = rev * 10 + reminder;
        a /= 10;
    }

    return rev;
}

int main()
{
    int value = reverse(-123456);
    cout << value;

    return 0;
}