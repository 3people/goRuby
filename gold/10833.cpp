#include <iostream>
using namespace std;
int main()
{
    int n, student, apple, remainder = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> student >> apple;
        remainder += apple % student;
    }
    cout << remainder;
    return 0;
}