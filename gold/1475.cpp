#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    int arr[10] = {
        0,
    };
    cin >> num;
    for (int i = 0; i < num.length(); i++)
    {
        arr[num[i] - '0']++;
    }
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i != 6 && i != 9)
        {
            cnt = max(cnt, arr[i]);
        }
    }
    cnt = max(cnt, (arr[6] + arr[9] + 1) / 2);
    cout << cnt;
}