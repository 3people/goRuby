#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1, b = 1;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }

        if (a > b)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
