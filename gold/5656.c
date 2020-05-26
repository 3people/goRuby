#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, i = 1;
    char op[3];
    while (1)
    {
        scanf("%d %s %d", &a, op, &b);
        if (strcmp(op, "E") == 0)
        {
            break;
        }
        if (strcmp(op, ">") == 0)
        {
            if (a > b)
            {
                printf("Case %d: true\n", i);
            }
            else
            {
                printf("Case %d: false\n", i);
            }
        }
        else if (strcmp(op, ">=") == 0)
        {
            if (a >= b)
            {
                printf("Case %d: true"\n, i);
            }
            else
            {
                printf("Case %d: false\n", i);
            }
        }
        else if (strcmp(op, "<") == 0)
        {
            if (a < b)
            {
                printf("Case %d: true\n", i);
            }
            else
            {
                printf("Case %d: false\n", i);
            }
        }
        else if (strcmp(op, "<=") == 0)
        {
            if (a <= b)
            {
                printf("Case %d: true\n", i);
            }
            else
            {
                printf("Case %d: false\n", i);
            }
        }
        else if (strcmp(op, "==") == 0)
        {
            if (a == b)
            {
                printf("Case %d: true\n", i);
            }
            else
            {
                printf("Case %d: false\n", i);
            }
        }
        else if (strcmp(op, "!=") == 0)
        {
            if (a != b)
            {
                printf("Case %d: true\n", i);
            }
            else
            {
                printf("Case %d: false\n", i);
            }
        }
        i++;
    }
}