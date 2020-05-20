#include <stdio.h>
#include <string.h>

int stack[10000];

int main(int argc, char const *argv[])
{
    int n, d, top = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char word[BUFSIZ];
        scanf("%s", word);
        if (strcmp(word, "push") == 0)
        {
            scanf("%d", &d);
            stack[top] = d;
            top++;
        }
        if (strcmp(word, "pop") == 0)
        {
            if (top <= 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", stack[top - 1]);
                top--;
            }
        }
        if (strcmp(word, "size") == 0)
        {
            printf("%d\n", top);
        }
        if (strcmp(word, "empty") == 0)
        {
            if (top <= 0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        if (strcmp(word, "top") == 0)
        {
            if (top <= 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", stack[top - 1]);
            }
        }
    }
}
