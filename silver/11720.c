#include <stdio.h>

int main()
{
    int cnt, sum = 0;
    scanf("%d", &cnt);
    char num[cnt];
    scanf("%s", num);
    for (int i = 0; i < cnt; i++)
    {
        sum += num[i] - '0';
    }
    printf("%d", sum);
}
