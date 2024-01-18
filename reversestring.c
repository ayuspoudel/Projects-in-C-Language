#include <stdio.h>
int reversed(int inp);
int main(){
    int a;
    printf("Enter any number more than two digits: ");
    scanf("%d", &a);
    int res = reversed(a);
    printf("%d", res);
    return 0;
}

int reversed(int inp){
    int rev = 0;
    while (inp!=0){
        int rem = inp%10;
        rev = (rev*10)+rem;
        inp /= 10;
    }
    return rev;
}