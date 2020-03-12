#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, non_self[11000] = {
               0,
           };
    for (i = 0; i < 10001; i++)
    {
        if (i <= 9 && i >= 1)
        {
            non_self[i + i]++;
        }
        else if (i <= 99 && i >= 10)
        {
            non_self[i + (i / 10) + (i % 10)]++;
        }
        else if (i <= 999 && i >= 100)
        {
            non_self[i + (i / 100) + (i % 100 / 10) + (i % 100 % 10)]++;
        }
        else if (i <= 9999 && i >= 1000)
        {
            non_self[i + (i / 1000) + (i % 1000 / 100) + (i % 1000 % 100 / 10) + (i % 1000 % 100 % 10)]++;
        }
    }
    for (i = 1; i < 10001; i++)
    {
        if (non_self[i] == 0)
        {
            printf("%d\n", i);
        }
    }
}
