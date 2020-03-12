#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, tmp, ans, i, j, digit = 0, start;
    scanf("%d", &num);
    tmp = num;
    while (tmp > 0)
    {
        tmp /= 10;
        digit++;
    }

    start = num - digit * 9;

    for (i = start; i < num; i++)
    {
        ans = i;
        for (j = i; j; j /= 10)
        {
            ans += j % 10;
        }
        if (ans == num)
        {
            break;
        }
    }
    printf("%d", i != num ? i : 0);
}
