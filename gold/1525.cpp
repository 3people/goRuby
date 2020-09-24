#include <iostream>
#include <queue>
#include <map>
#include <string>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    int num = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 0)
            {
                temp = 9;
            }
            num = num * 10 + temp;
        }
    }
    map<int, int> m;
    queue<int> q;
    q.push(num);
    m[num] = 0;

    while (!q.empty())
    {
        int curr = q.front();
        string s_curr = to_string(curr);
        q.pop();
        int idx = s_curr.find("9");
        int x = idx / 3;
        int y = idx % 3;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < 3 && ny < 3)
            {
                string next = s_curr;
                swap(next[x * 3 + y], next[nx * 3 + ny]);
                int n = stoi(next);
                if (m.count(n) == 0)
                {
                    m[n] = m[curr] + 1;
                    q.push(n);
                }
            }
        }
    }
    if (m.count(123456789) == 0)
    {
        cout << "-1" << '\n';
    }
    else
    {
        cout << m[123456789] << "\n";
    }
}