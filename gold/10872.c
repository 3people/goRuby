#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    if (n == 1 || n == 2)
    {
        printf("%d", n);
    }
    else
    {
        int res = 1;
        while (n > 1)
        {
            res *= n;
            n -= 1;
        }
        printf("%d", res);
    }
}
