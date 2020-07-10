#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num, cnt = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        string str = to_string(i);
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == '3' || str[j] == '6' || str[j] == '9')
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}