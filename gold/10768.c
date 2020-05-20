#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, d;
    scanf("%d", &m);
    scanf("%d", &d);
    if (m == 2 && d == 18)
    {
        printf("Special");
    }
    else
    {
        if (m == 2)
        {
            if (d > 18)
            {
                printf("After");
            }
            else
            {
                printf("Before");
            }
        }
        else if (m > 2)
        {
            printf("After");
        }
        else
        {
            printf("Before");
        }
    }
    return 0;
}
