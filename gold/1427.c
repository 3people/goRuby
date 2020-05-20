#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char num[11];
    int temp;
    scanf("%s", num);
    for (int i = 0; i < strlen(num); i++)
    {
        for (int j = 0; j < strlen(num); j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("%s", num);
}
