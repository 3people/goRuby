#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int cnt = 0;
    char arr[101];
    scanf("%s", arr);

    for (int i = 0; i < 101; i++)
    {
        if (strncmp(&arr[i], ",", 1) == 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt + 1);
    return 0;
}
