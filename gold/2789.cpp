#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a = "CAMBRIDGE";
    string b;
    cin >> b;
    for (int i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (b[i] == a[j])
            {
                b[i] = '1';
            }
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '1')
        {
            continue;
        }
        else
        {
            cout << b[i];
        }
    }
}