#include <iostream>

using namespace std;

int N, M, cnt = 0;
int map[501][501], visited[501][501];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int dfs(int x, int y, int cnt)
{
    if (cnt == 4)
    {
        return map[x][y];
    }
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && ny >= 0 && nx < N && ny < M && !visited[nx][ny])
        {
            visited[nx][ny] = true;
            sum = max(sum, map[x][y] + dfs(nx, ny, cnt + 1));
            visited[nx][ny] = false;
        }
    }
    return sum;
}

int ndfs(int x, int y)
{
    int result = 0;
    if (x >= 1 && y >= 1 && y < M - 1)
    {
        result = max(result, map[x][y - 1] + map[x][y] + map[x - 1][y] + map[x][y + 1]);
    }
    if (x >= 1 && x < N - 1 && y < M - 1)
    {
        result = max(result, map[x - 1][y] + map[x][y] + map[x][y + 1] + map[x + 1][y]);
    }
    if (x >= 0 && x < N - 1 && y < M - 1)
    {
        result = max(result, map[x][y - 1] + map[x][y] + map[x + 1][y] + map[x][y + 1]);
    }
    if (x >= 1 && x < N - 1 && y >= 1)
    {
        result = max(result, map[x - 1][y] + map[x][y] + map[x][y - 1] + map[x + 1][y]);
    }
    return result;
}
int main()
{
    int result = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> map[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            visited[i][j] = true;
            result = max(result, dfs(i, j, 1));
            result = max(result, ndfs(i, j));
            visited[i][j] = false;
        }
    }
    cout << result;
}