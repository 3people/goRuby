#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, arr[101] = {
                  0,
              },
              i, j, k, sum = 0, max = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                sum = arr[i] + arr[j] + arr[k];
                if (sum > max && sum <= m)
                {
                    max = sum;
                }
            }
        }
    }
    printf("%d", max);
}
