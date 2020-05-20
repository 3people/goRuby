#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum, sub, a, b;
    scanf("%d %d", &sum, &sub);
    a = (sum + sub) / 2;
    b = sum - a;

    if ((sum + sub) % 2 != 0 || (sum - sub) % 2 != 0)
    {
        printf("-1");
    }
    else
    {
        if (a >= 0 && b >= 0)
        {
            if (a > b)
            {
                printf("%d %d", a, b);
            }
            else
            {
                printf("%d %d", b, a);
            }
        }
        else
        {
            printf("-1");
        }
    }
    return 0;
}
