#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tmp, j = 1;
    char arr[101];
    char kmp[101];
    scanf("%s", arr);
    kmp[0] = arr[0];
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == 45)
        {
            kmp[j] = arr[i + 1];
            j++;
        }
    }
    printf("%s", kmp);
    return 0;
}
