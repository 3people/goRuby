#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0, cnt = 0;
    scanf("%d", &num);
    for (int i = 1; i < num / 3; i++)
    {
        for (int j = 1; j < num / 3; j++)
        {
            sum = i * 3 + j * 3;
            if ((num - sum) % 3 == 0 && num > sum)
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}
