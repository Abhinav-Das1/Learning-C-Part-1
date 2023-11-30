#include <stdio.h>

int main()
{
    int a = 4;
    int b = 2;
    int z = a * b; // Legal

    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of z is %d\n", z);

    // int z;
    // a * b = z//Illegal

    printf("7 when divided by 3 leaves a remainder of %d\n", 7 % 3);
    printf("The value of 3.0 / 9 is %f\n", 3.0 / 9);
    //No operator is assumed to be present
    return 0;
}