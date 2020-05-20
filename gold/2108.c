#include <stdio.h>
#include <stdlib.h>

int arr[500001] = {
    0,
};
int cnt[8001] = {
    0,
};

int static compare(const void *first, const void *second)
{
    if (*(int *)first > *(int *)second)
        return 1;
    else if (*(int *)first < *(int *)second)
        return -1;
    else
        return 0;
}

int mode();

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        cnt[arr[i] + 4000]++;
    }
    int freq = 0;
    for (int i = 1; i < 8001; i++)
    {
        if (cnt[i] > cnt[freq])
        {
            freq = i;
        }
    }
    for (int i = freq + 1; i < 8001; i++)
    {
        if (cnt[i] == cnt[freq])
        {
            freq = i;
            break;
        }
    }
    qsort(arr, n, sizeof(int), compare);
    printf("%.0f\n", (double)sum / n);
    printf("%d\n", arr[(n - 1) / 2]);
    printf("%d\n", freq - 4000);
    printf("%d\n", arr[n - 1] - arr[0]);
}
