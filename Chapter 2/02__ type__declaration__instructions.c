#include <stdio.h>

int main()
{
    // int a = 4;// Type declaration instruction
    // int a = 4, b, c;
    // b = c = a;
    // printf("The value of a is %d\n", a);
    // printf("The value of b is %d\n", b);
    // printf("The value of c is %d\n", c);

    // float b = a + 7.8;
    // float a = 4.2;
    // printf("The value of b is %f", b); This is wrong because instructions are executed simultaneously
    // so we have to first give value of a

    // float a = 4.2;
    // float b = a + 7.8;
    // printf("The value of b is %f", b);
    // return 0;

    int a, b, c, d;
    a = b = c = d = 25;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);
    printf("The value of d is %d\n", d);
    return 0;
}