#include <stdio.h>

int main (){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if(age>60){
        printf("You are above 60, you cannot drive\n");
    }
    else{
        printf("You can drive\n");
    }
    if(age=50){
        printf("Half Century\n");
    }

    return 0;
}