#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &n);
        sum += n;
    }
    int x, y;
    x = sum / 60;
    y = sum % 60;
    printf("%d\n", x);
    printf("%d", y);
    return 0;
}
