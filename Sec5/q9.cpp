// Function to  find a no. is palindrome or not.

#include <iostream>
using namespace std;

int palindrome(int a)
{
    int originalNum = a;
    int rev = 0;
    while (a != 0)
    {
        int reminder = a % 10;
        rev = rev * 10 + reminder;
        a /= 10;
    }

    return rev == originalNum;
}

int main()
{
    if (palindrome(-1234321))
    {
        cout << "yes";
    }
    else
    {
        cout << " no ";
    }

    return 0;
}