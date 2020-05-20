#include <iostream>
using namespace std;
int main()
{
    int n, k, res = 0;
    cin >> n >> k;
    int coin[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (k >= coin[i])
        {
            res += k / coin[i];
            k %= coin[i];
        }
    }
    cout << res;
}