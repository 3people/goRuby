#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char ah[1000], aah[1000];
    scanf("%s", ah);
    scanf("%s", aah);
    if (strlen(ah) >= strlen(aah))
    {
        printf("go");
    }
    else
    {
        printf("no");
    }
}
