#include <iostream>
#include <string>
#include <cmath>
#define M 1234567891
#define POW 31
using namespace std;

int main()
{
    int n;
    long long a = 0, r = 1, hash = 0;
    cin >> n;
    string num;
    cin >> num;
    for (int i = 0; i < num.size(); i++)
    {
        a = num[i] - 'a' + 1;
        hash = (hash + a * r) % M;
        r = (r * POW) % M;
    }
    cout << hash;
}