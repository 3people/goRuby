#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    if (s.size() % 2 == 1)
    {
        int mid = s.size() / 2;
        answer.push_back(s[mid]);
    }
    else
    {
        int mid = s.size() / 2 - 1;
        answer.push_back(s[mid]);
        answer.push_back(s[mid + 1]);
    }
    return answer;
}