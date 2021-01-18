#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int x, y;
    int sum = brown + yellow;
    for(y = 3;; y++){
        x = sum / y;
        if((x - 2) * (y - 2) == yellow){
            answer.push_back(x);
            answer.push_back(y);
            break;
        }
    }
    return answer;
}