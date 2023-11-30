#include <stdio.h>

int main()
{
    int principal = 1000, rate = 10, years = 2;
    int simpleInterest = (principal * rate * years) / 100;
    printf("The value of simple interest is %d\n", simpleInterest);
    return 0;
}