#include <iostream>
using namespace std;

int main()
{
    int money;
    cin >> money;

    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;

    int step = 1;

    switch (step)
    {
    case 1:
        a = money / 100;
        money %= 100;
    case 2:
        b = money / 50;
        money %= 50;
    case 3:
        c = money / 20;
        money %= 20;
    case 4:
        d = money / 10;
        money %= 10;
    case 5:
        e = money / 5;
        money %= 5;
    case 6:
        f = money / 2;
        money %= 2;
    case 7:
        g = money;
        break;
    default:
        break;
    }

    cout << "100 * " << a << "\n50 * " << b << "\n20 * " << c
         << "\n10 * " << d << "\n5 * " << e << "\n2 * " << f
         << "\n1 * " << g << endl;

    return 0;
}
