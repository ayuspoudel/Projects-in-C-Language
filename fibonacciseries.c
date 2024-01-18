#include <stdio.h>

int fibonacciseries(int a);

int main(){
    int num;
    printf("The number of digists in fibonacci series: ");
    scanf("%d", &num);
    printf("Your fibonacci series is: ");
    fibonacciseries(num);
    return 0;
}

int fibonacciseries(int a){
    int term1 = 0;
    int term2 = 1;
    for (int i=0; i<a; i++){
        if (i == 0){
            printf("%d\n", term1);
        }
        if (i == 1){
            printf("%d\n",term2);
        }
        int tempterm = term1+term2;
        printf("%d\n", tempterm);
        term1 = term2;
        term2 = tempterm;
    
    }
}
    