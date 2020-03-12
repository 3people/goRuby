#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int cnt;
    char sen[1000000];
    scanf("%[^\n]", sen);
    if (isalpha(sen[0]))
    {
        cnt++;
    }
    for (int i = 0; i < strlen(sen); i++)
    {
        if (isalpha(sen[i]) == 0 && isalpha(sen[i + 1]) != 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}
