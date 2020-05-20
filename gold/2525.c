#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    b += c % 60;
    a += c / 60;
    if (b >= 60)
    {
        b -= 60;
        a++;
    }
    if (a >= 24)
    {
        a -= 24;
    }
    printf("%d %d", a, b);
    return 0;
}
