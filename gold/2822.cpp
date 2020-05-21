#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    vector<pair<int, int>> v(8);
    for (int i = 0; i < 8; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    int sum = 0;
    int temp[5];
    for (int i = 0; i < 5; i++)
    {
        sum += v[i].first;
        temp[i] = v[i].second;
    }
    sort(temp, temp + 5);
    cout << sum << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << temp[i] << " ";
    }
}