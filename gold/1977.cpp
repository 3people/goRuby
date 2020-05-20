#include <iostream>
using namespace std;

int main()
{
    int M, N, sum = 0, s = 10000;
    int dp[10000];
    cin >> M >> N;
    for (int i = 1; i <= N; i++)
    {
        dp[i] = i * i;
    }
    for (int i = 1; i <= N; i++)
    {
        if (M <= dp[i] && dp[i] <= N)
        {
            sum += dp[i];
            s = min(s, dp[i]);
        }
    }
    if (sum == 0)
    {
        cout << "-1\n";
    }
    else
    {
        cout << sum << "\n";
        cout << s << "\n";
    }
    return 0;
}
