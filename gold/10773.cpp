#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int n;
    deque<int> dq;
    cin >> n;
    while (n--)
    {
        int zero;
        cin >> zero;
        if (zero == 0)
        {
            dq.pop_back();
        }
        else
        {
            dq.push_back(zero);
        }
    }
    int sum = 0;
    for (int i = 0; i < dq.size(); i++)
    {
        sum += dq[i];
    }
    cout << sum;
}