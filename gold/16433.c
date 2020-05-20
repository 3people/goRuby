#include <stdio.h>

char farm[101][101];

int main(int argc, char const *argv[])
{
    int n, r, c;
    scanf("%d %d %d", &n, &r, &c);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i % 2) ^ (j % 2)) == ((r % 2) ^ (c % 2)))
            {
                printf("v");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}
