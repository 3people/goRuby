// https://programmers.co.kr/learn/courses/30/lessons/12906
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.push_back(arr[0]);
    int j = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != answer[j])
        {
            answer.push_back(arr[i]);
            j++;
        }
    }
    return answer;
}