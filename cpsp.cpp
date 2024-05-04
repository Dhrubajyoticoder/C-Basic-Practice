#include <iostream>
using namespace std;
int main()
{
    int sp, cp;
    cout << "enter the sell price -";
    cin >> sp;
    cout << "enter the cost price -";
    cin >> cp;
    if (sp > cp)
    {
        cout << "Profit" << endl;
        cout << "profit margin- " << "" << sp - cp << endl;
    }
    else if (sp < cp)
    {
        cout << "Loss" << endl;
        cout << "Loss Margin- " << "" << cp - sp << endl;
    }
    else
    {
        cout << "No profit No Loss";
    }
    return 0;
}
