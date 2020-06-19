#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d, res = 0;
        cin >> n >> d;
        for (int i = 0; i < n; i++)
        {
            int v, f, c;
            cin >> v >> f >> c;
            if (v * f / c >= d)
            {
                res++;
            }
        }
        cout << res << "\n";
    }
}