#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < n; j++)
            {
                printf("*");
                printf(" ");
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                printf(" ");
                printf("*");
            }
            printf("\n");
        }
    }
}
