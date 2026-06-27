// Function to find maximum of two numbers.

#include <iostream>
using namespace std;

int maxNum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int find = maxNum(3, 4);
    cout << find;
    return 0;
}