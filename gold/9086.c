#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n;
    char arr[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        printf("%c%c\n", arr[0], arr[strlen(arr) - 1]);
    }
    return 0;
}
