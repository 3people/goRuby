#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, k, p, sum = 0;
    scanf("%d %d %d", &c, &k, &p);
    for (int i = 1; i <= c; i++)
    {
        sum += k * i + p * i * i;
    }
    printf("%d", sum);
}
