#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int nnum1 = (num1 / 100) + ((num1 % 100 / 10) * 10) + ((num1 % 100 % 10) * 100);
    int nnum2 = (num2 / 100) + ((num2 % 100 / 10) * 10) + ((num2 % 100 % 10) * 100);
    if (nnum1 > nnum2)
    {
        printf("%d", nnum1);
    }
    else
    {
        printf("%d", nnum2);
    }
}
