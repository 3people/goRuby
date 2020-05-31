#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    int arr[27] = {
        0,
    };
    string player;

    for (int i = 0; i < n; i++)
    {
        cin >> player;
        char c = player.front();
        arr[c - 97]++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (arr[i] >= 5)
        {
            cout << char(i + 97);
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << "PREDAJA";
    }
    return 0;
}