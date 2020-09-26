#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> v;

int main()
{
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    if (next_permutation(v.begin(), v.end()))
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        cout << "-1";
    }
}