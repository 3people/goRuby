#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    double arr[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%lf", &arr[i]);
    }

    double temp = arr[0];

    for (int j = 1; j < num; j++)
    {
        if (temp < arr[j])
        {
            temp = arr[j];
        }
    }

    double sum = 0;

    for(int k = 0; k<num; k++){
        arr[k] = arr[k] / temp * 100;
        sum = sum + arr[k];
    }
    sum = sum/num;
    printf("%.2lf", sum);
}
