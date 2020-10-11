#include <iostream>

using namespace std;

int main()
{
    int E, S, M, year = 0;
    cin >> E >> S >> M;
    while (1)
    {
        year++;
        if (((year - E) % 15 == 0) && ((year - S) % 28 == 0) && ((year - M) % 19) == 0)
        {
            cout << year;
            return 0;
        }
    }
}