#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

bool isPrime(int a)
{
    if (a < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n = 1;
    bool flag = false;
    while (n)
    {
        int a, b;
        cin >> n;
        for (int i = 1; i < n / 2; i++)
        {
            a = 2 * i + 1;
            b = n - a;
            if (isPrime(a) && isPrime(b))
            {
                printf("%d = %d + %d\n", n, a, b);
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "Goldbach's conjecture is wrong.";
        }
    }
}