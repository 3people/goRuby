#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  cin >> n;
  for(int i = 0;  i < n; i++){
    int num;
    string word,ans;
    cin >> num >> word;
    for(int j = 1; j < num; j++){
      ans.push_back(word[j-1]);
    }
    for(int j = num; j < word.size(); j++){
      ans.push_back(word[j]);
    }
    cout << ans << endl;
  }
}