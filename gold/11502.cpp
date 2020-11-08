#include <iostream>

using namespace std;

int arr[1001] = {0};

int main()
{
    for (int i = 2; i <= 1000; i++)
    {
        if (arr[i] == 1)
            continue;
        for (int j = i + i; j <= 1000; j += i)
        {
            arr[j] = 1;
        }
    }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        int k;
        cin >> k;
        for (int i = 2; i <= k; i++)
        {
            if (arr[i] == 1)
                continue;
            for (int j = 2; j <= k; j++)
            {
                if (arr[j] == 1)
                    continue;
                for (int l = 2; l <= k; l++)
                {
                    if (arr[l] == 1)
                        continue;
                    if ((i + j + l) == k)
                    {
                        cout << i << ' ' << j << ' ' << l << "\n";
                        flag = true;
                        break;
                    }
                }
                if (flag == true)
                    break;
            }
            if (flag == true)
                break;
        }
    }
}