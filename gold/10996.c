#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    scanf("%d", &input);
    for (int i = 1; i <= input * 2; i++)
    {
        for (int j = 1; j <= input; j++)
        {
            if (i % 2 == 1)
            {
                if (j % 2 == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (j % 2 == 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}
