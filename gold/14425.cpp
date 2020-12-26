#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    int n,m,cnt=0;
    set<string> a;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        a.insert(word);
    }
    for (int i = 0; i < m; i++)
    {
        string word;
        cin >> word;
        if (a.find(word) != a.end())
        {
            cnt++;
        }
    }
    cout << cnt;
}