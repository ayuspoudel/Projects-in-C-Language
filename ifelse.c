#include <stdio.h>
int main(){
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);

    if (a>0){
        printf("Your input %f is positive",a);
    }
    else{
        printf("Its neg");
    return 0;
    }
}