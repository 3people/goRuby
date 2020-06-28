#include <iostream>
using namespace std;
int main()
{
    int n, cnt = 0, ans = 0;
    int arr[1001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            cnt += arr[i] - arr[i - 1];
        }
        else
        {
            cnt = 0;
        }
        if (ans < cnt)
        {
            ans = cnt;
        }
    }
    cout << ans;
}