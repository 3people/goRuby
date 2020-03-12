#include <stdio.h>

int room(int h, int w, int n)
{
    int i, j;
    for (i = 1; i <= w; i++)
    {
        for (j = 1; j <= h; j++)
        {
            if (((i - 1) * h) + j == n)
            {
                return (j * 100 + i);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int h, w, n, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        printf("%d\n", room(h, w, n));
    }
}