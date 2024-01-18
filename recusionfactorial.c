#include <stdio.h>

int fact(int num);

int main(){
    int a;
    int res;
    printf("Enter a number:");
    scanf("%d",&a);
    res = fact(a);
    printf("The factorial of %d is %d",a,res);
    return 0;
}

int fact(int num){
    int res;
    while (num>0){
        if (num==1){
            return 1;
        }
        else{
        res = num*fact(num-1);
        }
    return res;
    }
}