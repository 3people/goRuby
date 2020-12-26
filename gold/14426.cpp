#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,m,cnt=0;
    vector<string> a;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        a.push_back(word);
    }
    for (int i = 0; i < m; i++)
    {
        string prefix;
        cin >> prefix;
        for (int j = 0; j < n; j++)
        {
            bool isPrefix = prefix.size() <= a[j].size() && mismatch(prefix.begin(), prefix.end(), a[j].begin(), a[j].end()).first == prefix.end();
            if (isPrefix)
                cnt++;
        }
    }
    cout << cnt;
}