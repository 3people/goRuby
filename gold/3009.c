#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[3], b[3], x, y;
    scanf("%d %d", &a[0], &b[0]);
    scanf("%d %d", &a[1], &b[1]);
    scanf("%d %d", &a[2], &b[2]);
    if (a[0] == a[2])
    {
        x = a[1];
    }
    else if (a[0] == a[1])
    {
        x = a[2];
    }
    else
    {
        x = a[0];
    }

    if (b[0] == b[2])
    {
        y = b[1];
    }
    else if (b[0] == b[1])
    {
        y = b[2];
    }
    else
    {
        y = b[0];
    }
    printf("%d %d", x, y);
    return 0;
}
