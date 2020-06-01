#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, p, x, y;
    cin >> a >> b >> c >> d >> p;
    x = a * p;
    if (c > p)
    {
        y = b;
    }
    else
    {
        y = (p - c) * d + b;
    }
    if (x > y)
    {
        cout << y;
    }
    else
    {
        cout << x;
    }
    return 0;
}
