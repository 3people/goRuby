#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int l, c;
char alpha[15];
vector<char> vowel, consonant;
vector<string> res;
map<string, bool> visited;

void key(int idx1, int idx2, int vcnt, int ccnt, string s)
{
    if (s.length() == l && vcnt >= 1 && ccnt >= 2)
    {

        sort(s.begin(), s.end());
        if (!visited.count(s))
        {
            visited[s] = true;
            res.push_back(s);
        }
        return;
    }
    if (s.length() == l)
    {
        return;
    }
    for (int i = idx1 + 1; i < vowel.size(); i++)
    {
        key(i, idx2, vcnt + 1, ccnt, s + vowel[i]);
    }
    for (int i = idx2 + 1; i < consonant.size(); i++)
    {
        key(idx1, i, vcnt, ccnt + 1, s + consonant[i]);
    }
}

int main()
{
    cin >> l >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> alpha[i];
        if (alpha[i] == 'a' || alpha[i] == 'e' || alpha[i] == 'i' || alpha[i] == 'o' || alpha[i] == 'u')
        {
            vowel.push_back(alpha[i]);
        }
        else
        {
            consonant.push_back(alpha[i]);
        }
    }
    sort(vowel.begin(), vowel.end());
    sort(consonant.begin(), consonant.end());
    key(-1, -1, 0, 0, "");
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\n";
    }
}