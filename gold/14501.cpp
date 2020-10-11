#include <iostream>

using namespace std;

int dp[16] = {
    0,
};
int main()
{
    int n, t, p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> p;
        if (dp[i] > dp[i + 1])
        {
            dp[i + 1] = dp[i];
        }
        if (dp[i + t] < dp[i] + p)
        {
            dp[i + t] = dp[i] + p;
        }
    }
    cout << dp[n];
}