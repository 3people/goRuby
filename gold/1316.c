#include <stdio.h>
#include <string.h>
int group(char input[], int len);
int main(int argc, char const *argv[])
{
    int cnt, sum = 0;
    char word[101];
    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++)
    {
        scanf("%s", word);
        sum += group(word, strlen(word));
    }
    printf("%d", sum);
}

int group(char input[], int len)
{
    int flag = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (input[i] == input[j])
            {
                flag = j - i;
                if (flag > 1)
                {
                    if (input[j - 1] != input[j])
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}