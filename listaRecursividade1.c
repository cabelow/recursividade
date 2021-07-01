#include <stdio.h>

void divide(int x){
    if (x == 0)
        return 0;
    else{
        printf("\n %d", x%10);
        divide(x/10);
    }
}

void main(){

    int x, i;

    scanf("%d", &x);

    divide(x);

    /*
    for (i=0; i<5; i++){
        x=x/10;
        printf("\n %d", x);
    }
    */
}

