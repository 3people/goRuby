#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n, p;
    char *name[101];
    char tmp[21];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &p);
        int flag = 0, len = 0, big = 0;
        for (int i = 0; i < p; i++)
        {
            int sal[101];
            scanf("%d %s", &sal[i], tmp);
            len = strlen(tmp) + 1;
            name[i] = (char *)malloc(sizeof(char) * len);
            strcpy(name[i], tmp);
            if (sal[i] > big)
            {
                big = sal[i];
                flag = i;
            }
        }
        printf("%s\n", name[flag]);
    }
    return 0;
}
