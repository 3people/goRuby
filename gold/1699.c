#include <stdio.h>

int min(int a, int b)
{
    return a < b ? a : b;
}

int main(int argc, char const *argv[])
{
    int n;
    int dp[100001];
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        dp[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j * j <= i; j++)
        {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    printf("%d", dp[n]);
}
