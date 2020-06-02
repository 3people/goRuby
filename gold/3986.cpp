#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    while (n--)
    {
        string voca;
        cin >> voca;
        stack<char> s;
        for (int i = 0; i < voca.size(); i++)
        {
            if (!s.empty() && s.top() == voca[i])
            {
                s.pop();
            }
            else
            {
                s.push(voca[i]);
            }
        }
        if (s.empty())
        {
            cnt++;
        }
    }
    cout << cnt;
}