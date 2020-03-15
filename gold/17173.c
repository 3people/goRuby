#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n, m, sum = 0;
    scanf("%d %d", &n, &m);
    int k[m], p[n + 1];
    memset(p, 0, (n + 1) * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &k[i]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j % k[i] == 0)
            {
                p[j] = j;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        sum += p[i];
    }
    printf("%d", sum);
}
