#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string oh, girl;
    int n, max = -1, idx = 0;
    cin >> oh;
    cin >> n;
    string girls[50];
    for (int i = 0; i < n; i++)
    {
        cin >> girls[i];
    }
    sort(girls, girls + n);
    for (int i = 0; i < n; i++)
    {
        string tmp = "";
        int l = 0, o = 0, v = 0, e = 0;
        tmp = oh + girls[i];
        for (int j = 0; j < tmp.size(); j++)
        {
            if (tmp[j] == 'L')
            {
                l++;
            }
            else if (tmp[j] == 'O')
            {
                o++;
            }
            else if (tmp[j] == 'V')
            {
                v++;
            }
            else if (tmp[j] == 'E')
            {
                e++;
            }
        }
        if (max < ((l + o) * (l + v) * (l + e) * (o + v) * (o + e) * (v + e)) % 100)
        {
            max = ((l + o) * (l + v) * (l + e) * (o + v) * (o + e) * (v + e)) % 100;
            idx = i;
        }
    }
    cout << girls[idx] << "\n";
    return 0;
}