#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string arr;
        getline(cin, arr);
        arr += '\n';
        stack<char> st;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == ' ' || arr[i] == '\n')
            {
                while (!st.empty())
                {
                    printf("%c", st.top());
                    st.pop();
                }
                printf(" ");
            }
            else
            {
                st.push(arr[i]);
            }
        }
    }
    return 0;
}
