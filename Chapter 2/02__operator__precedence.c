#include <stdio.h>

int main()
{

    int x = 4;
    int y = 3;

    printf("The value of 3*x - 8*y is %d\n", 3 * x - 8 * y);
    printf("The value of 8*y / 3*x is %d\n", 8 * y / 3 * x);
    // 8*y / 3*x = 24/12 will give wrong answer
    // 8*3 / 3*4
    // 24/3*4
    // 8*4 = 32

    return 0;
}