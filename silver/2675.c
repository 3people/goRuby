#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int test, cnt;
    char word[20];
    scanf("%d", &test);
    for (int k = 0; k < test; k++)
    {
        scanf("%d %s", &cnt, word);
        for (int i = 0; i < strlen(word); i++)
        {
            for (int j = 0; j < cnt; j++)
            {
                printf("%c", word[i]);
            }
        }
        printf("\n");
    }
}
