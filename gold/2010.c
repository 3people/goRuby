#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, plug, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &plug);
        sum += plug;
    }
    sum -= n - 1;
    printf("%d", sum);
    return 0;
}
