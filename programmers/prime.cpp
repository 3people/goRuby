#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int num = 110;
    int arr[num + 1] ={0,};
    arr[1] = 1;
    for (int i = 2; i * i <= num ; i++)
    {
        if(!arr[i]){
            for (int j = i + i; j <= num; j += i)
            {
                arr[j] = 1;
            }
        }
    }

    for (int i = 0; i < 111; i++)
    {
        if(arr[i] != 1){
            cout << i << " ";
        }
    }
}