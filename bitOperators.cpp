#include <iostream>
using namespace std;

int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
    {
        cout << b << endl;
    }
    else
    {
        cout << ++b << endl;
    }

    a = 1, b = 2;

    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage 1" << endl;
    }
    else
    {
        cout << " stage 2" << endl;
    }
    cout << a << " " << b << endl;

    int number = 3;
    cout << 25 * (++number) << endl;

    int x = 1;
    int y = ++x;
    int z = x++;
    cout << y << z << endl;

    cout << "\nfibonacci series\n";
    a = 0, b = 1;
    for (int i = 1; i <= 10; i++)
    {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

    cout << "\n\nPrime number"<< endl;
    number = 7;
    bool isPrime = 1;
    for (int i = 2; i < number; i++)
    {
        if ((number % i) != 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }

    return 0;
}