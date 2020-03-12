#include <stdio.h>

void merge(int s[], int low, int mid, int high);
void mergesort(int list[], int low, int high);
int u[1000000];

int main(int argc, char const *argv[])
{
    int cnt, i;
    scanf("%d", &cnt);
    int arr[cnt];
    for (i = 0; i < cnt; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergesort(arr, 0, cnt - 1);
    for (i = 0; i < cnt; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void merge(int s[], int low, int mid, int high)
{
    int i, j, k, l;
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (s[i] <= s[j])
        {
            u[k++] = s[i++];
        }
        else
        {
            u[k++] = s[j++];
        }
    }
    if (i > mid)
    {
        for (l = j; l <= high; l++)
        {
            u[k++] = s[l];
        }
    }
    else
    {
        for (l = i; l <= mid; l++)
        {
            u[k++] = s[l];
        }
    }
    for (l = low; l <= high; l++)
    {
        s[l] = u[l];
    }
}

void mergesort(int list[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(list, low, mid);
        mergesort(list, mid + 1, high);
        merge(list, low, mid, high);
    }
}