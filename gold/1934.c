#include <stdio.h>

int gcd(int a, int b);
int main(int argc, char const *argv[])
{
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", (a * b) / gcd(a, b));
    }
    return 0;
}

int gcd(int a, int b)
{
    while (b > 0)
    {
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}