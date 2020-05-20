#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180)
    {
        if (a == 60 && b == 60 && c == 60)
        {
            printf("Equilateral");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Error");
    }
}