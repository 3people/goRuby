#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    while (a--)
    {
        cin >> b >> c;
        cout << 2 - b + c << "\n";
    }
    return 0;
}