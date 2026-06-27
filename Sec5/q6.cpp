// Function to find maximum of three numbers.

#include <iostream>
using namespace std;

int maxNum(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int find = maxNum(4, 9, 5);
    cout << find;
    return 0;
}