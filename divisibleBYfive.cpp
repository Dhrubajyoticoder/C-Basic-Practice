#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a positive Integer  -";
    cin >> a;
    if (a % 5 == 0)
    {
        cout << "Divisible by five";
    }
    else
    {
        cout << "Not Divisible by five ";
    }
    return 0;
}