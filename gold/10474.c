#include <stdio.h>

int main(int argc, char const *argv[])
{
    long a, b;
    while (1)
    {
        scanf("%ld %ld", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        printf("%ld %ld / %ld\n", a / b, a - ((a / b) * b), b);
    }
    return 0;
}
