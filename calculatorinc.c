#include <stdio.h>

float calculator(int a, int b, int operationtype);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float div(int a, int b);

float main(){
    int x;
    int y;
    int opn;
    printf("Enter a number (seperated by space): ");
    scanf("%d %d",&x,&y);
    printf("Press 1 for addition\n Press 2 for subtraction\nPress 3 for multiplication\nPress 4 for division: ");
    scanf("%d",&opn);
    float res = calculator(x,y,opn);
    printf("Your answer is:%f",res);

}

float calculator(int x, int y, int opn){
        if (opn == 1){
        return add(x,y);
        }
    else if (opn == 2){
        return sub(x,y);
    }
    else if (opn == 3){
        return mul(x,y);
    }
    else if (opn == 4){
        return div(x,y);
    }
    else{
        printf("Invalid");
    }
}
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
float div(int a, int b){
    return a/b;
}





