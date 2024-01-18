#include <stdio.h>

int sum(int a);

int main(){
    int a;
    printf("Enter two numbers(seperated by space: )");
    scanf("%d", &a);
    int res = sum(a);
    printf("The sum of digits of %d is %d", a, res);


    return 0;
}

int sum(int a){
    while (a>0){
        if (a<10){
            return a;
        }
    else{
        int temp_a = a%10;
        int sum1 = sum(a/10) + temp_a;  
        return sum1;
        }
    }
}