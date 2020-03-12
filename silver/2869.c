#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, v, day;
    scanf("%d %d %d", &a, &b, &v);
    if ((v - b) % (a - b) == 0)
    {
        day = (v - b) / (a - b);
    }
    else
    {
        day = (v - b) / (a - b) + 1;
    }

    printf("%d", day);
}
