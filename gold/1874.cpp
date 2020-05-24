#include <iostream>
#include <stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, num, max = 0, ansidx = 0;
    char ans[200000];
    stack<int> s;
    cin >> n;
    while (n--)
    {
        cin >> num;
        if (num > max)
        {
            for (int i = max + 1; i <= num; i++)
            {
                s.push(i);
                ans[ansidx++] = '+';
            }
        }
        else
        {
            if (s.top() != num)
            {
                cout << "NO";
                return 0;
            }
        }
        s.pop();
        ans[ansidx++] = '-';
        if (num > max)
        {
            max = num;
        }
    }
    for (int i = 0; i < ansidx; i++)
    {
        cout << ans[i] << "\n";
    }
    return 0;
}