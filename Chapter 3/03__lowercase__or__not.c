#include <stdio.h>

int main()
{
    // 97-122 = 1-z
    char ch;
    printf("Enter the number\n");
    scanf("%c", &ch);
    if (ch<=122 && ch>=97)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }
    return 0;
}