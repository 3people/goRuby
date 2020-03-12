#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, ans;
    scanf("%d", &num);
    for (int i = 1;; i++)
    {
        if ((3 * i * i - 3 * i + 1) >= num)
        {
            printf("%d", i);
            break;
        }
    }
}
