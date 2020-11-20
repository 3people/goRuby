#include <iostream>

using namespace std;

int n, arr[100001], dp[1001];

void sovle()
{
    dp[0] = 0, dp[1] = arr[1];
    for (int i = 2; i <= n; i++)
    {
        dp[i] = arr[i];
        for (int j = 1; j <= i; j++)
        {
            dp[i] = min(dp[i], dp[i - j] + arr[j]);
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sovle();
    cout << dp[n];
}