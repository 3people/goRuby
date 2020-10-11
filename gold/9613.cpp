#include <iostream>
using namespace std;
int arr[101];

int gcd(int a, int b)
{
    int mod;
    while (b)
    {
        mod = a % b;
        a = b;
        b = mod;
    }
    return a;
}

int main()
{
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int n2;
        cin >> n2;
        for (int j = 0; j < n2; j++)
        {
            cin >> arr[j];
        }
        long long sum = 0;
        for (int k = 0; k < n2; k++)
        {
            for (int l = k + 1; l < n2; l++)
            {
                sum += gcd(arr[k], arr[l]);
            }
        }
        cout << sum << "\n";
    }
}