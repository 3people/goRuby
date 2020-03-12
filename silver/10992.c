#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        if (i == 0)
        {
            printf("*");
        }
        else
        {
            printf("*");
            for (int j = 0; j < 2 * (i - 1) + 1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 2 * n - 1; i++)
    {
        printf("*");
    }
}
