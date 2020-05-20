#include <stdio.h>

void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int sol(int arr[])
{
    int result = 0;
    for (int i = 0; i < 9; i++)
    {
        result += arr[i];
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (result - (arr[i] + arr[j]) == 100)
            {
                arr[i] = -1;
                arr[j] = -1;
                return 0;
            }
        }
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    sol(arr);
    sort(arr, 9);

    for (int i = 2; i < 9; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
