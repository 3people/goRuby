#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f, sum = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if (a < d)
    {
        sum += d - a;
    }
    if (b < e)
    {
        sum += e - b;
    }
    if (c < f)
    {
        sum += f - c;
    }
    cout << sum;
    return 0;
}