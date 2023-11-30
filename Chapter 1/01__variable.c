#include <stdio.h>
/*
This is my first C program
which is interesting.
*/
int main()
{
    int a = 4;
    // int b= 8.5; // not recommended because 8.5 is not an integer
    float b = 8.5;
    char c = 'X';
    int d = 100;
    int e = 50 + 50;
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("The value of a and d is %d \n", a * d);
    printf("The value of a is %d \n", e);
    return 0;
}