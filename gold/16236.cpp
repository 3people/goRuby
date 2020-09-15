#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, map[21][21], check[21][21], shark_x, shark_y, eat, shark_size = 2;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int min_dest, min_x, min_y, ans;

struct point
{
    int x, y;
};

void bfs(int x, int y)
{
    queue<point> q;
    check[x][y] = 0;
    q.push({x, y});
    while (!q.empty())
    {
        point curr = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];
            if (nx > N || ny > N || nx < 1 || ny < 1)
                continue;
            if (check[nx][ny] != -1 || map[nx][ny] > shark_size)
                continue;
            check[nx][ny] = check[curr.x][curr.y] + 1;
            if (map[nx][ny] < shark_size && map[nx][ny] != 0)
            {
                if (min_dest > check[nx][ny])
                {
                    min_x = nx;
                    min_y = ny;
                    min_dest = check[nx][ny];
                }
                else if (min_dest == check[nx][ny])
                {
                    if (min_x == nx)
                    {
                        if (min_y > ny)
                        {
                            min_x = nx;
                            min_y = ny;
                        }
                    }
                    else if (min_x > nx)
                    {
                        min_x = nx;
                        min_y = ny;
                    }
                }
            }
            q.push({nx, ny});
        }
    }
}

void init()
{
    min_dest = 401;
    min_x = 21;
    min_y = 21;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            check[i][j] = -1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 9)
            {
                shark_x = i;
                shark_y = j;
                map[i][j] = 0;
            }
        }
    }
    while (true)
    {
        init();
        bfs(shark_x, shark_y);
        if (min_x != 21 && min_y != 21)
        {
            ans += check[min_x][min_y];
            eat++;
            if (eat == shark_size)
            {
                shark_size++;
                eat = 0;
            }
            map[min_x][min_y] = 0;
            shark_x = min_x;
            shark_y = min_y;
        }
        else
        {
            break;
        }
    }
    cout << ans;
}