#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, arr[8];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum = 0;
    do
    {
        int temp = 0;
        for (int i = 0; i < n - 1; i++)
        {
            temp += abs(arr[i] - arr[i + 1]);
        }
        sum = max(sum, temp);
    } while (next_permutation(arr, arr + n));
    cout << sum;
}