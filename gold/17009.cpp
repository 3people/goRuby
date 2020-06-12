#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if (a * 3 + b * 2 + c > d * 3 + e * 2 + f)
    {
        cout << "A";
    }
    else if (a * 3 + b * 2 + c < d * 3 + e * 2 + f)
    {
        cout << "B";
    }
    else if (a * 3 + b * 2 + c == d * 3 + e * 2 + f)
    {
        cout << "T";
    }
    return 0;
}