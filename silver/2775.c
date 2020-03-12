#include <stdio.h>

int main(int argc, char const *argv[])
{
    int test, k, n, i, arr[15][15] = {0};
    for (i = 0; i < 15; i++)
    {
        arr[0][i] = i;
    }
    scanf("%d", &test);
    for (i = 0; i < test; i++)
    {
        scanf("%d %d", &k, &n);
        for (int l = 1; l <= k; l++)
        {
            for (int m = 1; m <= n; m++)
            {
                arr[l][m] = arr[l][m - 1] + arr[l - 1][m];
            }
        }
        printf("%d\n", arr[k][n]);
    }
}
