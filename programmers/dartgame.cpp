#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int solution(string dartResult)
{
    int answer = 0, prev = 0, curr = 0;
    for (int i = 0; i < dartResult.size(); i++)
    {
        if (dartResult[i] >= '0' && dartResult[i] <= '9')
        {
            prev = curr;
            if (dartResult[i + 1] == '0')
            {
                curr = 10;
                i++;
            }
            else
            {
                curr = dartResult[i] - '0';
            }
        }
        else if (dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T')
        {
            if (dartResult[i] == 'D')
            {
                curr = pow(curr, 2);
            }
            else if (dartResult[i] == 'T')
            {
                curr = pow(curr, 3);
            }
            if (dartResult[i + 1] == '*')
            {
                answer -= prev;
                prev *= 2;
                curr *= 2;
                i++;
                answer += prev;
            }
            else if (dartResult[i + 1] == '#')
            {
                curr *= -1;
                i++;
            }
            answer += curr;
        }
    }
    return answer;
}