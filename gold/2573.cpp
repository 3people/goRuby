#include <iostream>

using namespace std;

int N, M;
int ice[301][301];
int visit[301][301];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int a, int b)
{
    visit[a][b] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = a + dx[i];
        int ny = b + dy[i];
        if (nx < 0 || ny < 0 || nx >= N || ny >= M)
        {
            continue;
        }
        if (ice[nx][ny] == 0 || visit[nx][ny])
        {
            continue;
        }
        dfs(nx, ny);
    }
}

void melt(int a, int b)
{
    visit[a][b] = true;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        int nx = a + dx[i];
        int ny = b + dy[i];
        if (nx < 0 || ny < 0 || nx > N || ny > M || visit[nx][ny])
        {
            continue;
        }
        if (ice[nx][ny] == 0)
        {
            cnt++;
        }
        else if (ice[nx][ny] == 1)
        {
            melt(nx, ny);
        }
    }
    if (ice[a][b] - cnt <= 0)
    {
        ice[a][b] = 0;
    }
    else
    {
        ice[a][b] -= cnt;
    }
}

int island()
{
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (ice[i][j] != 0 && !visit[i][j])
            {
                cnt++;
                if (cnt > 1)
                {
                    break;
                }
                dfs(i, j);
            }
        }
    }
    return cnt;
}
int main()
{
    int year = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> ice[i][j];
        }
    }
    while (1)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (ice[i][j] != 0 && !visit[i][j])
                {
                    melt(i, j);
                }
            }
        }
        year++;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                visit[i][j] = false;
            }
        }
        if (island() > 1)
        {
            cout << year;
            break;
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                visit[i][j] = false;
            }
        }
        if (island() == 0)
        {
            cout << 0;
            break;
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                visit[i][j] = false;
            }
        }
    }
    return 0;
}