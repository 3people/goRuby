#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    scanf("%d", &input);
    int r = input % 14;
    int d = input / 14;
    if (r == 1 || r == 13)
    {
        printf("baby");
    }
    else if (r == 0 || r == 2 || r == 14)
    {
        printf("sukhwan");
    }
    else if (r == 5)
    {
        printf("very");
    }
    else if (r == 6)
    {
        printf("cute");
    }
    else if (r == 9)
    {
        printf("in");
    }
    else if (r == 10)
    {
        printf("bed");
    }
    else
    {
        if (r == 3 || r == 7 || r == 11)
        {
            if (d >= 3)
            {
                printf("tu+ru*%d", 2 + d);
            }
            else
            {
                printf("tururu");
                for (int i = 0; i < d; i++)
                {
                    printf("ru");
                }
            }
        }
        else if (r == 4 || r == 8 || r == 12)
        {
            if (d >= 4)
            {
                printf("tu+ru*%d", 1 + d);
            }
            else
            {
                printf("turu");
                for (int i = 0; i < d; i++)
                {
                    printf("ru");
                }
            }
        }
    }
}
