#include <stdio.h>

typedef struct
{
    int x;
    int y;
} point;

#define swap(x, y, temp) \
    {                    \
        temp = x;        \
        x = y;           \
        y = temp;        \
    }
void partition(int left, int right, point *arr);

int main(int argc, char const *argv[])
{
    int n, i;
    scanf("%d", &n);
    point arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    partition(0, n - 1, arr);
    for (i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
}

void partition(int left, int right, point *arr)
{
    int pivot = left;
    int i, j = left;
    point temp;
    if (left < right)
    {

        for (i = left + 1; i <= right; i++)
        {
            if (arr[i].y < arr[pivot].y)
            {
                j++;
                swap(arr[i], arr[j], temp);
            }
            else if (arr[i].y == arr[pivot].y)
            {
                if (arr[i].x < arr[pivot].x)
                {
                    j++;
                    swap(arr[i], arr[j], temp);
                }
            }
        }
        swap(arr[pivot], arr[j], temp);
        pivot = j;
        partition(left, pivot - 1, arr);
        partition(pivot + 1, right, arr);
    }
}
