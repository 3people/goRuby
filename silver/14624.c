#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("I LOVE CBNU");
    }
    else
    {
        for (int i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");
        int mid = num / 2 + 1;
        for (int i = 0; i < mid; i++)
        {
            for (int j = 0; j < mid; j++)
            {
                if (j == mid - (i + 1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            for (int j = 0; j < mid; j++)
            {
                if (j == i - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
