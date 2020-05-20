#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(int argc, char const *argv[])
{
    int n, res = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            res += arr[j];
        }
    }
    printf("%d", res);
    return 0;
}
