#include <stdio.h>

int main(int argc, char const *argv[])
{
    int l, p, a, b, c, d, e;
    scanf("%d %d", &l, &p);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d %d %d %d %d", (l * p - a) * -1, (l * p - b) * -1, (l * p - c) * -1, (l * p - d) * -1, (l * p - e) * -1);
    return 0;
}
