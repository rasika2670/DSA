#include<iostream>
using namespace std;

int fact(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n,r;
    cout << "n :";
    cin >> n;

    cout << "r : ";
    cin >> r;

    int nCr = fact(n) / ((fact(r)*fact(n-r)));

    cout << "\nnCr : " << nCr << endl;

    return 0;
}