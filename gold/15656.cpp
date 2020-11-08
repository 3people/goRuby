#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
int arr[9]={0,};
vector<int> v;

void dfs(int cnt){
    if (cnt == m)
    {
        for (auto k : v)
        {
            cout << k << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
        dfs(cnt + 1);
        v.pop_back();
    }
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    dfs(0);
}