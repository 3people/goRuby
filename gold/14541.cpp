#include <iostream>
using namespace std;
int main()
{
    while (1)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            return 0;
        }
        int a, b, temp = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            sum += a * (b - temp);
            temp = b;
        }
        cout << sum << " miles\n";
    }
}