#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sugar, cnt = 0;
    scanf("%d", &sugar);
    while (1)
    {
        if (sugar % 5 == 0)
        {
            cnt += sugar / 5;
            printf("%d", cnt);
            break;
        }
        sugar -= 3;
        cnt++;
        if (sugar < 0)
        {
            printf("-1");
            break;
        }
    }
}
