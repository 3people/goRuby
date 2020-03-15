#include <stdio.h>

int fibo(int n)
{
    int fib[3] = {0, 1, 1};
    for (int i = 2; i < n; i++)
    {
        fib[(i + 1) % 3] = fib[i % 3] + fib[(i - 1) % 3];
    }
    return fib[n % 3];
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
}
