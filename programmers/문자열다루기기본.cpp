// https://programmers.co.kr/learn/courses/30/lessons/12918?language=cpp
#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    if (s.size() == 4 || s.size() == 6)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] > 65)
            {
                answer = false;
                break;
            }
        }
    }
    else
    {
        answer = false;
    }
    return answer;
}