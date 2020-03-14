#include <stdio.h>
#define minimum(a, b) a < b ? a : b

int main(int argc, char const *argv[])
{
    char board[50][50];
    int n, m, b_cnt = 0, w_cnt = 0, min = 80;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &board[i]);
    }
    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            b_cnt = 0;
            w_cnt = 0;
            for (int k = i; k < i + 8; k++)
            {
                for (int l = j; l < j + 8; l++)
                {
                    if ((k + l) % 2 == 0)
                    {
                        if (board[k][l] == 'B')
                        {
                            w_cnt++;
                        }
                        else
                        {
                            b_cnt++;
                        }
                    }
                    else
                    {
                        if (board[k][l] == 'B')
                        {
                            b_cnt++;
                        }
                        else
                        {
                            w_cnt++;
                        }
                    }
                }
            }
            min = minimum(min, b_cnt);
            min = minimum(min, w_cnt);
        }
    }
    printf("%d", min);
}
