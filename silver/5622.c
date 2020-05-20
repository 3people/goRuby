#include <stdio.h>
#include <string.h>

int num(int n);

int main(int argc, char const *argv[])
{
    char arr[15];
    int sum = 0;
    scanf("%s", arr);
    for (int j = 'A'; j <= 'Z'; j++)
    {
        for (int i = 0; i < strlen(arr); i++)
        {
            if (j == arr[i])
            {
                sum += num(j);
            }
        }
    }
    sum += strlen(arr);
    printf("%d", sum);
}

int num(int n)
{
    switch (n)
    {
    case 'A':
    case 'B':
    case 'C':
        return 2;
    case 'D':
    case 'E':
    case 'F':
        return 3;
    case 'G':
    case 'H':
    case 'I':
        return 4;
    case 'J':
    case 'K':
    case 'L':
        return 5;
    case 'M':
    case 'N':
    case 'O':
        return 6;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
        return 7;
    case 'T':
    case 'U':
    case 'V':
        return 8;
    default:
        return 9;
    }
}