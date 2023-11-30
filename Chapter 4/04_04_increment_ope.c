#include <stdio.h>

int main (){
    int i = 10;
    printf("The value of i++ is %d\n", i++);
    // i++ ---> Pehele print fir inrement
    // ++i ---> Pehele inrement fir print
    printf("The value of i is %d\n", i);
    
    i+=10; // increase i by 10
    printf("The value of i is %d\n", i);
    return 0;
}