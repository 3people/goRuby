#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char arr[21];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        for (int j = 0; arr[j]; j++)
        {
            arr[j] = tolower(arr[j]);
        }
        printf("%s\n", arr);
    }
    return 0;
}
