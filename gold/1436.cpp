#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 666;; i++)
    {
        string shom = to_string(i);
        if (shom.find("666") != -1)
        {
            cnt++;
        }
        if (n == cnt)
        {
            cout << i;
            break;
        }
    }
    return 0;
}