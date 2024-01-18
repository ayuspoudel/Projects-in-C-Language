#include <stdio.h>
//this code only works for integer power of two
float powof2(float num);

float main(){
    float a;
    printf("Enter a number:");
    scanf("%f",&a);
    float res = powof2(a);
    printf("The result of 2 raised to the power %.2f is %.2f", a, res);
    return 0;
}

float powof2(float num){
    float res;
    if(num == 0){
        return 1;
    }
    else{
        res = 2*powof2(num-1);
        return res;
    }

}
