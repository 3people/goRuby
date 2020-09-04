#include <iostream>
#include <queue>

using namespace std;

int board[101][101];
int head_x, head_y, tail;
int sx[10101], sy[10101];
char cmd[10001];

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main()
{
    int N, K, X, L;
    char C;
    cin >> N >> K;
    int apple = 1;
    int snake = -1;
    for (int i = 0; i < K; i++)
    {
        int x, y;
        cin >> x >> y;
        board[x][y] = 1;
    }
    cin >> L;
    for (int i = 0; i < L; i++)
    {
        cin >> X >> C;
        cmd[X] = C;
    }
    int dir = 0;
    X = 0;
    head_x = 1, head_y = 1, tail = X;
    sx[X] = 1, sy[X] = 1;
    board[head_x][head_y] = -1;

    while (true)
    {
        X++;
        head_x += dx[dir];
        head_y += dy[dir];
        if (head_x < 1 || head_x > N || head_y < 1 || head_y > N || board[head_x][head_y] == -1)
        {
            break;
        }
        if (board[head_x][head_y] == 0)
        {
            int tail_x = sx[tail];
            int tail_y = sy[tail];
            board[tail_x][tail_y] = 0;
            tail++;
        }
        sx[X] = head_x;
        sy[X] = head_y;
        board[head_x][head_y] = -1;
        if (cmd[X] == 'D')
        {
            dir = (dir + 1) % 4;
        }
        else if (cmd[X] == 'L')
        {
            dir = (dir + 3) % 4;
        }
    }
    cout << X;
}