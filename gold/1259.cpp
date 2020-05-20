#include <iostream>
using namespace std;

bool isPal(int n)
{
    int original = n;
    int pal = 0;
    while (n)
    {
        pal = pal * 10 + n % 10;
        n /= 10;
    }
    return pal == original;
}

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (!n)
        {
            break;
        }
        else
        {
            if (isPal(n))
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }
        }
    }
}