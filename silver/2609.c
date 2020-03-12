#include <stdio.h>

int gcd(int a, int b)
{
    int small;
    small = a < b ? a : b;
    for (int i = small; i > 1; i--)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            return i;
        }
    }
    if (a == 1 || b == 1)
    {
        return 1;
    }
}

int gcc(int a, int b)
{
    int small;
    small = a < b ? a : b;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (a * j == b * i)
            {
                return a * j;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    printf("%d", gcc(a, b));
}
