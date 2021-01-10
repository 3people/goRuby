#include <string>
#include <vector>
#include <iostream>

using namespace std;

string find(string w){
    string u, v;
    
    if(w == "")
        return "";
    
    for(int i = 0, left = 0, right = 0; i < w.size(); i++){
        if(w[i] == '('){
            left++;
        }
        else{
            right++;
        }
        if(left == right){
            u = w.substr(0, i + 1);
            v = w.substr(i + 1);
            break;
        }
    }
    int count = 0;
    for(int i = 0; i < u.size(); i++){
        if(count == 0 && u[i] == ')'){
            count++;
            continue;
        }
        if(u[i] == '('){
            count++;
        }
        else{
            count--;
        }
    }
    if(count == 0){
        v = find(v);
        return u + v;
    }
    else{
        string temp = "(";
        temp += find(v);
        temp += ")";
        u.erase(0, 1);
        u.erase(u.size() - 1, 1);
        for(int i = 0; i < u.size(); i++){
            if(u[i] == '(')
                u[i] = ')';
            else
                u[i] = '(';
        }
        return temp + u;
    }
}

int main() {
    string p = ")(";
    string answer = "";
    answer = find(p);
    cout << answer;
}