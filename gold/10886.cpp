#include <iostream>
using namespace std;
int main()
{
    int n, cute = 0, ncute = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
        {
            ncute++;
        }
        else
        {
            cute++;
        }
    }
    if (cute > ncute)
    {
        cout << "Junhee is cute!";
    }
    else
    {
        cout << "Junhee is not cute!";
    }
}