#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n, r_cnt = 0, b_cnt = 0, ans = 987654321;
    string rb;
    cin >> n >> rb;
    for (int i = 0; i < n; i++)
    {
        if (rb[i] == 'R')
        {
            r_cnt++;
        }
        else
        {
            b_cnt++;
        }
    }
    int idx = 0, cnt = 0;
    while (rb[idx++] == 'R')
    {
        cnt++;
    }
    ans = min(ans, r_cnt - cnt);

    idx = n - 1, cnt = 0;
    while (rb[idx--] == 'R')
    {
        cnt++;
    }
    ans = min(ans, r_cnt - cnt);

    idx = 0, cnt = 0;
    while (rb[idx++] == 'B')
    {
        cnt++;
    }
    ans = min(ans, b_cnt - cnt);

    idx = n - 1, cnt = 0;
    while (rb[idx--] == 'B')
    {
        cnt++;
    }
    ans = min(ans, b_cnt - cnt);
    cout << ans;
}