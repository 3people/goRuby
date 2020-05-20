#include <stdio.h>

int coin[6] = {500, 100, 50, 10, 5, 1};

int main(int argc, char const *argv[])
{
    int money, remain = 0, cnt = 0, i = 0;
    scanf("%d", &money);
    remain = 1000 - money;
    while (remain > 0)
    {
        if (remain >= coin[i])
        {
            cnt++;
            remain -= coin[i];
        }
        else
        {
            i++;
        }
    }
    printf("%d", cnt);
}
