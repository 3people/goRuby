// https://programmers.co.kr/learn/courses/30/lessons/12919
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul)
{
    string answer = "";
    vector<string>::iterator it;
    it = find(seoul.begin(), seoul.end(), "Kim");
    int index = distance(seoul.begin(), it);
    if (it != seoul.end())
    {
        answer = "김서방은 " + to_string(index) + "에 있다";
    }
    return answer;
}