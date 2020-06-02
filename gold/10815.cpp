#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    scanf("%d", &a);
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        int target;
        scanf("%d", &target);
        int low = 0, high = a - 1;
        bool in = false;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (v[mid] == target)
            {
                in = true;
                break;
            }
            else if (v[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (in)
        {
            printf("1 ");
        }
        else
            printf("0 ");
    }
    return 0;
}