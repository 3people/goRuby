#include <stdio.h>

int main(int argc, char const *argv[])
{
    double degree, temp;
    scanf("%lf", &degree);
    temp = degree;
    while (1)
    {
        scanf("%lf", &degree);
        if (degree == 999)
        {
            break;
        }

        printf("%.2lf\n", degree - temp);
        temp = degree;
    }

    return 0;
}
