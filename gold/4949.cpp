#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    while (1)
    {
        string sen;
        stack<char> s;
        int flag = 0;
        getline(cin, sen);
        if (sen == ".")
        {
            break;
        }

        for (int i = 0; i < sen.size(); i++)
        {
            char c = sen[i];
            if (c == '(' || c == '[')
            {
                s.push(c);
            }
            else if (c == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    flag = 1;
                    break;
                }
                s.pop();
            }
            else if (c == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    flag = 1;
                    break;
                }
                s.pop();
            }
        }
        if (flag || !s.empty())
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }
    }
}
