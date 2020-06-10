#include <iostream>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cin >> a;
    for (int i = 0; i < 9; i++)
    {
        cin >> b;
        sum += b;
    }
    cout << a - sum;
    return 0;
}