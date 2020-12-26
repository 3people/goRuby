#include <iostream>

using namespace std;

int map[10][10];
int visited[10];
int n, min_coast = 987654321;

int min(int x, int y)
{
    if (x < y)
        return x;
    return y;
}

void dfs(int start, int i, int sum, int cnt)
{
    if (cnt == n && start == i)
    {
        min_coast = (min_coast == 0) ? sum : min(sum, min_coast);
    }
    for (int j = 0; j < n; j++)
    {

        if (!map[i][j])
            continue;
        if (!visited[i])
        {
            visited[i] = true;
            sum += map[i][j];
            if (sum <= min_coast)
            {
                dfs(start, j, sum, cnt + 1);
            }
            visited[i] = false;
            sum -= map[i][j];
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        dfs(i, i, 0, 0);
    }
    cout << min_coast;
}