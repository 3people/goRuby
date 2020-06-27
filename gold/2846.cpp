#include <stdio.h>

int main()
{
    int n;
    int arr[1001];
    int max = 0, count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] < arr[i] ? count += arr[i] - arr[i - 1] : count = 0;

        if (max < count)
            max = count;
    }
    printf("%d", max);
}