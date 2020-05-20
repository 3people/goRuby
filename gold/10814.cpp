#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, age;
    string name;
    cin >> n;
    vector<pair<int, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    stable_sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }

    return 0;
}