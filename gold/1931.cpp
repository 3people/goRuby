#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int main()
{
    int a, b, n, cnt = 1;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), cmp);
    int min = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first >= min)
        {
            min = v[i].second;
            cnt++;
        }
    }
    cout << cnt;
}