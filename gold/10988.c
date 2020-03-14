#include <stdio.h>
#include <string.h>

int pal(char *word)
{
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char word[100];
    scanf("%s", word);
    printf("%d", pal(word));
}
