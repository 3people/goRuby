#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int N, M;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int map[101][101] = {
    0,
};
int check[101][101] = {
    0,
};

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    check[x][y] = 1;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < N && ny < M && nx >= 0 && ny >= 0)
            {
                if (check[nx][ny] == 0 && map[nx][ny] == 1)
                {
                    q.push(make_pair(nx, ny));
                    check[nx][ny] = check[x][y] + 1;
                }
                else if (check[nx][ny] == 0)
                {
                    check[nx][ny] = -1;
                }
            }
        }
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%1d", &map[i][j]);
        }
    }
    bfs(0, 0);
    cout << check[N - 1][M - 1] << "\n";
}