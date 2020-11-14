#include <iostream>

using namespace std;

int dp[12];

int find(int num)
{
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= num; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[num];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        cout << find(num) << "\n";
    }
}