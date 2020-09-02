#include <iostream>
#include <stack>
#include <utility>
#include <cstdio>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    stack<pair<int, int>> s;
    int count, num;
    // cin >> count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        // cin >> num;
        scanf("%d", &num);
        while (!s.empty())
        {
            if (s.top().second > num)
            {
                // cout << s.top().first << " ";
                printf("%d ", s.top().first);
                break;
            }
            s.pop();
        }
        if (s.empty())
        {
            // cout << "0 ";
            printf("0 ");
        }
        s.push(make_pair(i + 1, num));
    }
}