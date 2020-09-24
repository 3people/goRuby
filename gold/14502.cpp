#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

int N, M, ans = 0;
int map[9][9], c_map[9][9];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<pair<int, int>> virus;

int bfs()
{
    queue<pair<int, int>> q;
    int size = 0;
    for (int i = 0; i < virus.size(); i++)
    {
        q.push(make_pair(virus[i].first, virus[i].second));
    }
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= N || ny >= M || nx < 0 || ny < 0)
                continue;
            if (c_map[nx][ny] == 0)
            {
                c_map[nx][ny] = 2;
                q.push(make_pair(nx, ny));
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (c_map[i][j] == 0)
            {
                size++;
            }
        }
    }
    ans = max(size, ans);
    return ans;
}

void copy()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            c_map[i][j] = map[i][j];
        }
    }
}

void make_wall(int x)
{
    if (x == 3)
    {
        copy();
        bfs();
        return;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (map[i][j] == 0)
            {
                map[i][j] = 1;
                make_wall(x + 1);
                map[i][j] = 0;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 2)
            {
                virus.push_back(make_pair(i, j));
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (map[i][j] == 0)
            {
                map[i][j] = 1;
                make_wall(1);
                map[i][j] = 0;
            }
        }
    }
    cout << ans;
}