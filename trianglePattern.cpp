#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int count = 1;
        int j=n-i+1;
        while (j>=1)
        {
            cout << count++;
            j--;
        }

        j = 1;
        while (j < i)
        {
            cout << "**";
            j++;
        }

        j=n-i+1;
        while (j>=1)
        {
            cout << j--;
        }

        cout << endl;
        i++;
    }
    return 0;
}