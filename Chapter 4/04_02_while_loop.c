#include <stdio.h>

int main (){
    int a;
    scanf("%d", &a);
    while(a<10){
    //    int a=11;
    //     while(a>10){ -----> Infinite loop
        printf("%d\n", a);
        a++;
    }
    return 0;
}