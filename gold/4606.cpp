#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, ans;
    int flag = 0;
    string arr[7] = {"%20", "%21", "%24", "%25", "%28", "%29", "%2a"};
    char c[7] = {' ', '!', '$', '%', '(', ')', '*'};
    while (1)
    {
        ans = "";
        getline(cin, str);
        if (str[0] == '#')
        {
            return 0;
        }
        for (int i = 0; i < str.size(); i++)
        {
            flag = 0;
            for (int j = 0; j < 7; j++)
            {
                if (str[i] == c[j])
                {
                    ans += arr[j];
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                ans += str[i];
            }
        }
        cout << ans << endl;
    }
}