#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int result = 0;
    int arr[9];
    bool flag = false;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        result += arr[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if ((result - arr[i] - arr[j]) == 100)
            {
                arr[i] = -1;
                arr[j] = -1;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    sort(arr, arr + 9);
    for (int i = 2; i < 9; i++)
    {
        cout << arr[i] << "\n";
    }
}