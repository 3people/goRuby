#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int arr[100001];
void search(int n, int num)
{
    int start = 0, end = n - 1, mid;
    while (end - start >= 0)
    {
        mid = (start + end) / 2;
        if (arr[mid] == num)
        {
            printf("1\n");
            return;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    printf("0\n");
    return;
}

int main()
{
    int N, M, num;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + N);
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &num);
        search(N, num);
    }
    return 0;
}