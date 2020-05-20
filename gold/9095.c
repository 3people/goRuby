#include <stdio.h>
#include <string.h>
int arr[100001];
int ott(int n)
{
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for (int i = 4; i <= n; i++)
    {
        arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
    }
    return arr[n];
}
int main(int argc, char const *argv[])
{
    int count, num;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        printf("%d\n", ott(num));
    }
}
