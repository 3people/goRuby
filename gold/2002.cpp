#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool find(string s, vector<string> v3)
{
    for (int i = 0; i < v3.size(); i++)
    {
        if (v3[i] == s)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<string> v1;
    vector<string> v2;
    vector<string> v3;
    int n;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v2.push_back(a);
    }
    int idx1 = 0, idx2 = 0, cnt = 0;
    while (idx1 < v1.size() && idx2 < v2.size())
    {
        if (v1[idx1] == v2[idx2])
        {
            idx1++;
            idx2++;
        }
        else
        {
            if (find(v1[idx1], v3))
            {
                idx1++;
            }
            else
            {
                v3.push_back(v2[idx2]);
                idx2++;
                cnt++;
            }
        }
    }
    cout << cnt;
}