#include <stdio.h>
int han(int num)
{
    int han_num = 0, i, a, b, c;
    if (num < 100)
    {
        return num;
    }
    else
    {
        for (i = 100; i <= num; i++)
        {
            a = i / 100;
            b = i % 100 / 10;
            c = i % 100 % 10;
            if ((a - b) == (b - c))
            {
                han_num++;
            }
        }
        return (99 + han_num);
    }
}

int main()
{
    int a, res;
    scanf("%d", &a);
    res = han(a);
    printf("%d", res);
}
