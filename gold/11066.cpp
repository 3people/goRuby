#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

#define MAX_SIZE 501

int dp[MAX_SIZE][MAX_SIZE];
int k;

int recursive(int start, int end)
{
    if (start == end)
        return 0;
    if (start + 1 == end)
        return dp[start][end] = dp[start][start] + dp[end][end];
    if (dp[start][end] != 0x3f3f3f3f)
        return dp[start][end];

    for (int mid = start; mid < end; mid++)
    {
        int left = recursive(start, mid);
        int right = recursive(mid + 1, end);
        dp[start][end] = min(dp[start][end], left + right);
    }
    for (int i = start; i <= end; i++)
    {
        dp[start][end] += dp[i][i];
    }
    return dp[start][end];
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        memset(dp, 0x3f, sizeof(dp));
        scanf("%d", &k);
        for (int j = 1; j <= k; j++)
        {
            scanf("%d", &dp[j][j]);
        }
        printf("%d\n", recursive(1, k));
    }
}
