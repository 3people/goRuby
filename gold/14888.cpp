#include <iostream>
#include <algorithm>

using namespace std;

int n;
int number[12], op[4];
int max_res = -987654321;
int min_res = 987654321;

void dfs(int plus, int minus, int mul, int div, int cnt, int sum)
{
    if (cnt == n)
    {
        max_res = max(max_res, sum);
        min_res = min(min_res, sum);
    }
    if (plus)
    {
        dfs(plus - 1, minus, mul, div, cnt + 1, sum + number[cnt]);
    }
    if (minus)
    {
        dfs(plus, minus - 1, mul, div, cnt + 1, sum - number[cnt]);
    }
    if (mul)
    {
        dfs(plus, minus, mul - 1, div, cnt + 1, sum * number[cnt]);
    }
    if (div)
    {
        dfs(plus, minus, mul, div - 1, cnt + 1, sum / number[cnt]);
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cin >> op[i];
    }
    dfs(op[0], op[1], op[2], op[3], 1, number[0]);
    cout << max_res << "\n";
    cout << min_res << "\n";
}