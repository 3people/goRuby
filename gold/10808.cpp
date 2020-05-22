#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int arr[27] = {
        0,
    };
    cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        arr[word[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}