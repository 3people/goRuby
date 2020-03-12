#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e, sum;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum = (a * a + b * b + c * c + d * d + e * e) % 10;
    printf("%d", sum);
}
