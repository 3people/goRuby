#include <iostream>
using namespace std;
int main()
{
    int n;
    int a, b, c;
    char op1, op2;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> op1 >> b >> op2 >> c;
        if (op1 == '+')
        {
            if (a + b == c)
            {
                cout << "Case " << i << ": YES\n";
            }
            else
            {
                cout << "Case " << i << ": NO\n";
            }
        }
        else if (op1 == '-')
        {
            if (a - b == c)
            {
                cout << "Case " << i << ": YES\n";
            }
            else
            {
                cout << "Case " << i << ": NO\n";
            }
        }
    }
    return 0;
}