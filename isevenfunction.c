#include <stdio.h>

int iseven(int a);

int main(){
    int x;
    scanf("%d",&x);
    int res = iseven(x);
    if (res == 0){
        printf("%d is even",x);
    
    }
    else{
        printf("%d is odd",x);

    }
    return 0;
}

int iseven(int a){
    if (a%2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}