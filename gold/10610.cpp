#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main()
{
    string n;
    vector<int> v;
    int sum = 0, tmp;
    bool zero = false;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        tmp = n[i] - '0';
        if (tmp == 0)
        {
            zero = true;
        }

        v.push_back(tmp);
        sum += tmp;
    }
    sort(v.begin(), v.end());
    if (!zero || (sum % 3 != 0))
    {
        cout << "-1";
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[v.size() - 1 - i];
        }
    }
    return 0;
}