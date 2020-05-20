#include <stdio.h>

int dp[41] = {1, 1};
int fibonacci(int n)
{
    if (n <= 1)
    {
        return dp[n];
    }
    else
    {
        if (dp[n] > 0)
        {
            return dp[n];
        }
    }
    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp == 0)
        {
            printf("1 0\n");
        }
        else if (temp == 1)
        {
            printf("0 1\n");
        }
        else
        {
            fibonacci(temp);
            printf("%d %d\n", dp[temp - 2], dp[temp - 1]);
        }
    }
    return 0;
}
