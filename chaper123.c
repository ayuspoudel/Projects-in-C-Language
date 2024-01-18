#include <stdio.h>

#define Q 25
# define D 10
# define N 5

int main(){
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    printf("Enter Cents");
    scanf("%d", &cents);
    quarters = cents/Q;
    dimes = (cents%Q)/D;
    nickels = (cents%Q%D)/N;
    pennies = (cents%Q%D%N);

    printf("Quarters: %d, Cents = %d, Nickels = %d, Pennies = %d", quarters, dimes, nickels, pennies);
}


