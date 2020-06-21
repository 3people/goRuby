#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    string before, after;
    cin >> before >> after;
    for (int i = 0; i < n; i++)
    {
        if (before[i] == after[i])
            ans++;
    }
    cout << ans;
}