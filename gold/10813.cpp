#include <iostream>
using namespace std;
int main()
{
    int n, m, idx1, idx2;
    cin >> n >> m;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> idx1 >> idx2;
        int temp;
        temp = arr[idx1];
        arr[idx1] = arr[idx2];
        arr[idx2] = temp;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}