#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, prime, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &prime);
        if (prime >= 2)
        {
            int flag = 1;
            for (int j = 2; j <= sqrt(prime); j++)
            {
                if (prime % j == 0)
                {
                    flag = 0;
                }
            }
            cnt += flag;
        }
    }
    printf("%d", cnt);
}
