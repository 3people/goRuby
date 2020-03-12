#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;
    scanf("%d", &count);
    int a, b;
    for (int i = 0; i < count; i++)
    {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
    }
}
