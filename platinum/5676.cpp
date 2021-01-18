#include <algorithm>
#include <cstdio>
#define _N 100000

using namespace std;

int seg[4*_N], n,k,a[_N + 1],y,z;

char x;

int update(int pos, int val, int node, int x, int y){
    if(y < pos || pos < x){
        return seg[node];
    }
    if(x == y){
        return seg[node] = val;
    }
    int mid = (x + y) >> 1;
    return seg[node] = update(pos, val, node * 2, x, mid) * update(pos, val, node * 2 + 1, mid + 1, y);
}

int query(int low, int high, int node, int x, int y){
    if(y < low || high < x){
        return 1;
    }
    if(low <= x && y <= high){
        return seg[node];
    }
    int mid = (x + y) >> 1;
    return query(low, high, node * 2, x, mid) * query(low, high, node * 2 + 1, mid + 1, y);
}

int main() {
    while(scanf("%d%d", &n, &k) != EOF){
        for(int i = 1; i <= n ; i++){
            scanf("%d", &y);
            if(y > 0){
                update(i, 1, 1, 1, n);
            }
            else if(!y){
                update(i, 0, 1, 1, n);
            }
            else{
                update(i, -1, 1, 1, n);
            }
        }
        for(int i = 0; i < k; i++){
            getchar();
            scanf("%c%d%d", &x, &y, &z);
            if(x == 'C'){
                if(z > 0){
                    update(y, 1, 1, 1, n);
                }
                else if(!z){
                    update(y, 0, 1, 1, n);
                }
                else{
                    update(y, -1, 1, 1, n);
                }
            }
            else{
                int r = query(y, z, 1, 1, n);
                if(!r){
                    printf("0");
                }
                else{
                    printf("%c", r > 0 ? '+' : '-');
                }
            }
        }
        puts("");
    }
    return 0;
}