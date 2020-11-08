#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
int arr[9]={0,};
int visited[9]={0,};
vector<int> v;

void dfs(int cnt){
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (visited[i] || v[i] < arr[cnt - 1])
            continue;
        visited[i] = true;
        arr[cnt] = v[i];
        dfs(cnt+1);
        visited[i] =false;
    }
    
}
int main() {
    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    dfs(0);
}