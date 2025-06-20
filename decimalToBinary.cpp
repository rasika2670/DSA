#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int binary;
    cin >> binary;
    int deci = 0;

    int i = 0;
    while (binary != 0)
    {
        int rem = binary % 10;
        if (rem == 1)
        {
            deci += pow(2, i);
        }
        i++;
        binary /= 10;
    }

    cout << deci;
    return 0;
}