#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t, n, c, num = 0;
    float g, gpa = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d %f", &c, &g);
            num += c;
            gpa += c * g;
        }
        printf("%d %.1f\n", num, gpa / num);
        num = 0;
        gpa = 0;
    }
}
