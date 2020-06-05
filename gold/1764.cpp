#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string name;
    vector<string> names, ans;
    for (int i = 0; i < n + m; i++)
    {
        cin >> name;
        names.push_back(name);
    }
    sort(names.begin(), names.end());
    int cnt = 0;
    for (int i = 0; i < n + m; i++)
    {
        if (!names[i].compare(names[i + 1]))
        {
            cnt++;
            ans.push_back(names[i]);
            i++;
        }
    }
    cout << cnt << endl;
    for (vector<string>::iterator i = ans.begin(); i != ans.end(); i++)
    {
        cout << *i << endl;
    }
    return 0;
}