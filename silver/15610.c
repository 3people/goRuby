#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    unsigned long long int cnt;
    scanf("%lld", &cnt);
    double num = sqrt(cnt) * 4;
    printf("%f", num);
}
