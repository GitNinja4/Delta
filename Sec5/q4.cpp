// Function to check even/odd.

#include <iostream>
using namespace std;

int even(int);

int main()
{
    int value = even(8);
    if (value)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
    return 0;
}
int even(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}