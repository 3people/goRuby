#include <cstdio>

int main()
{
    int m, n, bit = 0;
    char cmd[10];
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%s", cmd);
        if (cmd[0] == 'a' && cmd[1] == 'd')
        {
            scanf("%d", &n);
            bit |= (1 << n);
        }
        else if (cmd[0] == 'r')
        {
            scanf("%d", &n);
            bit &= ~(1 << n);
        }
        else if (cmd[0] == 'c')
        {
            scanf("%d", &n);
            if (bit & (1 << n))
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if (cmd[0] == 't')
        {
            scanf("%d", &n);
            bit ^= (1 << n);
        }
        else if (cmd[0] == 'a')
        {
            bit = (1 << 21) - 1;
        }
        else if (cmd[0] == 'e')
        {
            bit = 0;
        }
    }
}