#include <iostream>
#include <deque>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> dq;
    while (n--)
    {
        string cmd;
        cin >> cmd;
        int x;
        if (cmd == "push_front")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (cmd == "push_back")
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (cmd == "pop_front")
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if (cmd == "size")
        {
            cout << dq.size() << endl;
        }
        else if (cmd == "empty")
        {
            if (dq.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (cmd == "front")
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.front() << endl;
            }
        }
        else if (cmd == "back")
        {
            if (dq.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << dq.back() << endl;
            }
        }
    }
}