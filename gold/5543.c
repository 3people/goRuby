#include <stdio.h>

int main(int argc, char const *argv[])
{
    int burger, coke, tmp_bur = 3000, tmp_coke = 3000;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &burger);
        if (tmp_bur > burger)
        {
            tmp_bur = burger;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &coke);
        if (tmp_coke > coke)
        {
            tmp_coke = coke;
        }
    }
    printf("%d", tmp_bur + tmp_coke - 50);
}
