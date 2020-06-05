#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    char ptr[500000][21], ptr2[500000][21];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", ptr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%s", ptr2[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!strcmp(ptr[i], ptr[j]))
            {
                cnt++;
            }
        }
    }
}