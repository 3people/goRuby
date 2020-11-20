#include <iostream>

using namespace std;

int n;
long long dp[100001][4];

void solve()
{
    dp[1][1] = dp[2][2] = dp[3][1] = dp[3][2] = dp[3][3] = 1;
    for (int i = 4; i <= 100001; i++)
    {
        if (i - 1 >= 0)
        {
            dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
        }
        if (i - 2 >= 0)
        {
            dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
        }
        if (i - 3 >= 0)
        {
            dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
        }
    }
}

int main()
{
    cin >> n;
    solve();
    while (n--)
    {
        int num;
        cin >> num;
        cout << (dp[num][1] + dp[num][2] + dp[num][3]) % 1000000009 << "\n";
    }
}