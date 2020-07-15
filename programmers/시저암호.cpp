// https://programmers.co.kr/learn/courses/30/lessons/12926
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    char start;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                start = 'A';
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                start = 'a';
            }
            s[i] = start + (s[i] + n - start) % 26;
        }
    }
    return s;
}