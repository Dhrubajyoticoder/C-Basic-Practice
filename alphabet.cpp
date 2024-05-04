#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the character -";
    cin >> ch;
    int asc = (int)ch;
    if (asc >= 97 && asc <= 122)
    {
        cout << "Lowercase alphabet";
    }
    else if (asc >= 65 && asc <= 90)
    {
        cout << "highercase alphabet";
    }

    else
    {
        cout << "This is not alphabet";
    }
    return 0;
}
