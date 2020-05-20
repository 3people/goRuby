#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    else
    {
        return a.size() < b.size();
    }
}

int main()
{
    vector<string> v;
    int n;
    string temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        v.push_back(word);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        if (temp == v[i])
        {
            continue;
        }
        cout << v[i] << "\n";
        temp = v[i];
    }
    return 0;
}