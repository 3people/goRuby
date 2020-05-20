#include <stdio.h>

int arr[1001];

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= num; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
    }
    printf("%d", arr[num]);
}
