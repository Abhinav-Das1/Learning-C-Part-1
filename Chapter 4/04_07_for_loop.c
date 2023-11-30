#include <stdio.h>

int main (){
    int n;
    printf("Enter the value of n\n");
     scanf("%d", &n);
    for(int a = 0; a<n; a++){
        printf("The value of a is %d\n", a+1);
    }
    return 0;
}