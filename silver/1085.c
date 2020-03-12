#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, w, h, temp;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    temp = x > y ? y : x;
    temp = temp > h - y ? h - y : temp;
    temp = temp > w - x ? w - x : temp;
    printf("%d", temp);
}
