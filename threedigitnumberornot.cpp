#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter positive integer -";
    cin >> n;
    if (n >99 && n <1000)
    {
        cout << n;
    }
    else
    {
        cout << "NOt a three digit number";
    }
    return 0;
}