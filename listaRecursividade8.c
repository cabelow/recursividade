#include <stdio.h>

void divide(int x, int k, int *pcont){
    if (x == 0)
        printf("\n tem %d vezes", *pcont);
    else{
        //printf("\n %d", x%10);
        if(x%10 == k){
            (*pcont)++;
        }
        divide(x/10, k, pcont);
    }
}

void main(){

    int x, k, i;
    int cont = 0;
    int *pcont = &cont;

    scanf("%d", &x);
    scanf("%d", &k);

    divide(x, k, pcont);

    /*
    for (i=0; i<5; i++){
        x=x/10;
        printf("\n %d", x);
    }
    */
}


