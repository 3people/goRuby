#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e, f, g, h, s = 0, t = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%d %d %d %d", &e, &f, &g, &h);
    s = a + b + c + d;
    t = e + f + g + h;
    printf("%d", s > t ? s : t);
    return 0;
}
