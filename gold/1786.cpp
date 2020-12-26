#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
string n,m;
int ans[1000100];
int p[1000100];
int cnt=0;

void getp(){
    int msize = m.size();
    for (int i = 1, j =0; i < msize; i++)
    {
        while (j>0 && m[i] != m[j])
        {
            j = p[j-1];
        }
        if (m[i] == m[j])
        {
            p[i] = ++j;
        }
    }
}

void kmp(){
    int nsize = n.size();
    int msize = m.size();
    cnt = 0;
    for (int i = 0, j = 0; i < nsize; i++)
    {
        while (j > 0 && n[i] != m[j])
        {
            j = p[j-1];
        }
        if (n[i] == m[j])
        {
            if (j == msize - 1)
            {
                ans[cnt++] = i - msize + 2;
                j = p[j];
            }
            else{
                j++;
            }
        } 
    }   
}
int main(){
    getline(cin, n);
    getline(cin, m);
    getp();
    kmp();
    cout << cnt << "\n";
    for (int i = 0; i < cnt; i++)
    {
        cout << ans[i] << "\n";
    }
    
}