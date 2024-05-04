#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the positive interger -";
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "Divisible by 5 & 3";
    }
    else
    {
        cout << "Not divisible by 5 & 3";
    }
    return 0;
}