#include <iostream>
#include <string>
using namespace std;

#define MAX 10001
class Queue
{
private:
    int arr[MAX];
    int rear = 0;
    int head = 0;

public:
    void push(int x)
    {
        arr[rear++] = x;
    }
    int pop()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return arr[head++];
        }
    }
    int size()
    {
        return rear - head;
    }

    int empty()
    {
        if (size() == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int front()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return arr[head];
        }
    }

    int back()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return arr[rear - 1];
        }
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    Queue q;
    while (n--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push")
        {
            int num_push;
            cin >> num_push;
            q.push(num_push);
        }
        else
        {
            if (cmd == "pop")
            {
                cout << q.pop() << endl;
            }
            else if (cmd == "size")
            {
                cout << q.size() << endl;
            }
            else if (cmd == "empty")
            {
                cout << q.empty() << endl;
            }
            else if (cmd == "front")
            {
                cout << q.front() << endl;
            }
            else if (cmd == "back")
            {
                cout << q.back() << endl;
            }
        }
    }
}