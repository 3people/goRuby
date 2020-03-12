#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count, i, j;
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < count - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * (i + 1) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
