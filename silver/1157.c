#include <stdio.h>

int main(int argc, char const *argv[])
{
    char word[1000001];
    int num[26] = {
        0,
    };
    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] < 97)
        {
            word[i] += 32;
        }
        num[word[i] - 97]++;
    }
    int max, max_index = 0;
    max = num[0];
    for (int i = 1; i < 26; i++)
    {
        if (max < num[i])
        {
            max = num[i];
            max_index = i;
        }
        else if (max == num[i] && num[i] != 0)
        {
            max_index = -1;
        }
    }
    if (max_index != -1)
    {
        printf("%c", 65 + max_index);
    }
    else
    {
        printf("?");
    }
}
