#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

ll search(vector<ll> v, ll start, ll end, int n)
{
    ll mid = (start + end) / 2;
    ll sum = 0;
    while (start <= end)
    {
        sum = 0;
        mid = (start + end) / 2;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i] / mid;
        }
        if (n > sum)
        {
            end = mid - 1;
        }
        else if (n <= sum)
        {
            start = mid + 1;
        }
    }
    return end;
}
int main()
{
    int k, n;
    cin >> k >> n;
    vector<ll> v;
    for (int i = 0; i < k; i++)
    {
        ll lan;
        cin >> lan;
        v.push_back(lan);
    }
    sort(v.begin(), v.end());
    cout << search(v, 1, v[v.size() - 1], n);
    return 0;
}