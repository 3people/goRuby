#include <iostream>
#include <queue>
using namespace std;
int mat[1001][1001];
int visited[1001];
int N, M, V;

void init(){
    for (int i = 0; i < 1001; i++)
    {
        visited[i] = 0;
    }
}

void dfs(int x){
    visited[x] = 1;
    cout << x << " ";
    for (int i = 1; i <= N; i++)
    {
        if (visited[i] == 0 && mat[x][i] == 1)
        {
            dfs(i);
        }
    }
}

void bfs(int x){
    queue<int> q;
    q.push(x);
    visited[x] = 1;
    while (!q.empty())
    {
        int temp = q.front();
        visited[temp] = 1;
        cout << temp << " ";
        q.pop();
        for (int i = 1; i <= N; i++)
        {
            if (visited[i] == 0 && mat[temp][i] == 1)
            {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main(){
    int x,y;
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++)
    {
        cin >> x >> y;
        mat[x][y] = mat[y][x] = 1;
    }
    init();
    dfs(V);
    cout << "\n";
    init();
    bfs(V);
}