#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    vector<int> v;
    int n, sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> n;
        if (n % 2 == 1)
        {
            sum += n;
            v.push_back(n);
        }
    }
    sort(v.begin(), v.end());
    if (sum == 0)
    {
        cout << "-1";
    }
    else
    {
        cout << sum << endl;
        cout << v[0];
    }
}