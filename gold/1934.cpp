#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int mod;
    while (b)
    {
        mod = a % b;
        a = b;
        b = mod;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << "\n";
    }
}