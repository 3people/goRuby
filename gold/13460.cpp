#include <iostream>
#include <string>
#include <utility>
#include <queue>

using namespace std;

char map[11][11];
int N, M;
int rx, ry, bx, by, hx, hy;
int visited[11][11][11][11];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt = 0;
bool flag;
queue<pair<int, int>> red;
queue<pair<int, int>> blue;

int main()
{
    cin >> N >> M;
    string str;
    for (int i = 0; i < N; i++)
    {
        cin >> str;
        for (int j = 0; j < M; j++)
        {
            map[i][j] = str[j];
            if (map[i][j] == 'R')
            {
                red.push(make_pair(i, j));
                rx = i;
                ry = j;
            }
            if (map[i][j] == 'B')
            {
                blue.push(make_pair(i, j));
                bx = i;
                by = j;
            }
            if (map[i][j] == 'O')
            {
                hx = i;
                hy = j;
            }
        }
    }
    visited[rx][ry][bx][by] = true;
    while (!red.empty())
    {
        int qsize = red.size();
        while (qsize--)
        {
            rx = red.front().first;
            ry = red.front().second;
            bx = blue.front().first;
            by = blue.front().second;
            red.pop();
            blue.pop();
            if (cnt > 10)
            {
                break;
            }
            if (rx == hx && ry == hy)
            {
                flag = true;
                break;
            }
            for (int i = 0; i < 4; i++)
            {
                int nrx = rx + dx[i];
                int nry = ry + dy[i];
                int nbx = bx + dx[i];
                int nby = by + dy[i];
                while (1)
                {
                    if (map[nrx][nry] == '#')
                    {
                        nrx -= dx[i];
                        nry -= dy[i];
                        break;
                    }
                    if (map[nrx][nry] == 'O')
                    {
                        break;
                    }
                    nrx += dx[i];
                    nry += dy[i];
                }
                while (1)
                {
                    if (map[nbx][nby] == '#')
                    {
                        nbx -= dx[i];
                        nby -= dy[i];
                        break;
                    }
                    if (map[nbx][nby] == 'O')
                    {
                        break;
                    }
                    nbx += dx[i];
                    nby += dy[i];
                }
                if (nbx == hx && nby == hy)
                {
                    continue;
                }
                if (nrx == nbx && nry == nby)
                {
                    switch (i)
                    {
                    case 0:
                        rx < bx ? nrx-- : nbx--;
                        break;
                    case 1:
                        ry < by ? nry-- : nby--;
                        break;
                    case 2:
                        rx > bx ? nrx++ : nbx++;
                        break;
                    case 3:
                        ry > by ? nry++ : nby++;
                        break;
                    }
                }
                if (visited[nrx][nry][nbx][nby])
                {
                    continue;
                }
                red.push(make_pair(nrx, nry));
                blue.push(make_pair(nbx, nby));
                visited[nrx][nry][nbx][nby] = true;
            }
        }
        if (flag)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    if (flag)
    {
        cout << cnt;
    }
    else
    {
        cout << -1;
    }
}