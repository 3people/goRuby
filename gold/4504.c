#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (1)
    {
        int num;
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        if (num % n == 0)
        {
            printf("%d is a multiple of %d.\n", num, n);
        }
        else
        {
            printf("%d is NOT a multiple of %d.\n", num, n);
        }
    }
    return 0;
}