#include <iostream>
using namespace std;

int main()
{
    int n, m, i, gcd;

    cout << "Enter the first number : " << endl;
    cin >> n;

    cout << "Enter the second number : " << endl;
    cin >> m;

    for (i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }