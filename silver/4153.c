#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        if ((c * c == a * a + b * b) || (b * b == a * a + c * c) || (a * a == b * b + c * c))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
}
