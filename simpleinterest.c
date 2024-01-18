#include <stdio.h>

float simpleinterestcalculator(float P, float R, float T);

int main(){
    float p; float r; float t;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate per year: ");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%f",&t);
    float res = simpleinterestcalculator(p,r,t);
    printf("The simple interest is %.3f\n",res);

    return 0;
}

float simpleinterestcalculator(float P, float R, float T){
    return (P*R*T)/100;
}