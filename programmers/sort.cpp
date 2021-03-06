#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int k;
bool compare(string a, string b)
{
    if (a[k] != b[k])
    {
        return a[k] < b[k];
    }
    else
        return a < b;
}
vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;
    answer = strings;
    k = n;
    sort(answer.begin(), answer.end(), compare);
    return answer;
}