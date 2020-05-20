#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 6, b = 6;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        printf("%d\n", a + b);
    }

    return 0;
}
