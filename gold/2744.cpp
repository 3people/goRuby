#include <iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] < 97)
        {
            word[i] += 32;
        }
        else
        {
            word[i] -= 32;
        }
    }
    cout << word;
}