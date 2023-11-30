#include <stdio.h>

int main()
{
    int A;
    printf("Enter a\n");
    scanf("&d", &A);
    // one liner
    (A < 5) ? printf("A is less than 5") : printf("A is not less than 5");
    return 0;
}