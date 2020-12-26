#include <iostream>

using namespace std;

int num[13];
int temp[13];
int n;

void dfs(int start, int depth)
{
    if (depth == 6)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << temp[i] << ' ';
        }
        cout << "\n";
        return;
    }
    for (int i = start; i < n; i++)
    {
        temp[depth] = num[i];
        dfs(i + 1, depth + 1);
    }
}

int main()
{
    while (cin >> n && n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        dfs(0, 0);
        cout << "\n";
    }
}