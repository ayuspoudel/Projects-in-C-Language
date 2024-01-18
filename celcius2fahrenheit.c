#include <stdio.h>

float cel2far(float num);

float main(){
    float temp;
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&temp);
    float res = cel2far(temp);
    printf("%.2f", res);
    return 0;
}

float cel2far(float num){
    return num*9/5;
}