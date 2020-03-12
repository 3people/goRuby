#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char word[101];
    char alpha[26];
    scanf("%s", word);
    for (int i = 0; i < 26; i++)
    {
        alpha[i] = -1;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int j = 0; j < strlen(word); j++)
        {
            if (c == word[j])
            {
                alpha[word[j] - 'a'] = j;
                break;
            }
        }
    }

    for (int k = 0; k < 26; k++)
    {
        printf("%d", alpha[k]);
        if (k < 25)
        {
            printf(" ");
        }
    }
}
