#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool check(string c)
{
    stack<char> s;
    bool is_vps = true;
    for (int i = 0; i < c.length(); i++)
    {
        if (c[i] == '(')
        {
            s.push(c[i]);
        }
        else if (!s.empty() && c[i] == ')')
        {
            s.pop();
        }
        else if (s.empty() && c[i] == ')')
        {
            is_vps = false;
            break;
        }
    }
    if (s.empty() && is_vps)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;
        if (check(c))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}