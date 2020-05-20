#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int arr[51];
    scanf("%d", &n);
    for (int i = 0, i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(a, a + n);
    printf("%d", arr[0] * arr[n - 1]);
    return 0;
}
