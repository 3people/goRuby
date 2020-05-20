#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, k, a, b, c, d;
    scanf("%d %d", &n, &m);
    int arr[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        int sum = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        for (int j = a; j <= c; j++)
        {
            for (int l = b; l <= d; l++)
            {
                sum += arr[j][l];
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
