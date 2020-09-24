#include <iostream>
#include <cmath>
using namespace std;

int arr[101];

int main()
{
    int n;
    cin >> n;
    int cnt = n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            cnt--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                cnt--;
                break;
            }
        }
    }
    cout << cnt;
}