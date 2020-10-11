#include <iostream>

using namespace std;
int n;
int arr[11], op[4];
int maxx = -987654321, minn = 987654321;

void solve(int idx, int ans, int add, int sub, int mul, int div)
{
    if (idx >= n)
    {
        if (ans > maxx)
        {
            maxx = ans;
        }
        if (ans < minn)
        {
            minn = ans;
        }
        return;
    }
    if (add)
        solve(idx + 1, ans + arr[idx], add - 1, sub, mul, div);
    if (sub)
        solve(idx + 1, ans - arr[idx], add, sub - 1, mul, div);
    if (mul)
        solve(idx + 1, ans * arr[idx], add, sub, mul - 1, div);
    if (div)
        solve(idx + 1, ans / arr[idx], add, sub, mul, div - 1);
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> op[i];
    }
    solve(1, arr[0], op[0], op[1], op[2], op[3]);
    cout << maxx << "\n"
         << minn;
}