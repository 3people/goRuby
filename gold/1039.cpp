#include <iostream>
#include <queue>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    string N, result = "0";
    int K;
    cin >> N >> K;
    queue<string> q;
    q.push(N);
    for(int i = 0; i < K; i++){
      int s = q.size();
      set<string> visited;
      for(int j = 0; j < s; j++){
        string curr = q.front();
        q.pop();
        if(visited.count(curr)){
          continue;
        }
        visited.insert(curr);
        for(int k = 0; k < curr.size()-1; k++){
          for(int l = k + 1; l < curr.size(); l++){
            if(k > 0 || curr[l] != '0'){
              swap(curr[k],curr[l]);
              q.push(curr);
              swap(curr[k],curr[l]);
            }
          }
        }
      }
    }

    while(!q.empty()){
      result = max(result, q.front());
      q.pop();
    }
    if(result[0] == '0'){
      cout << -1;
    }
    else{
      cout << result;
    }
}