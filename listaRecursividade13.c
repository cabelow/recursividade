#include <stdio.h>

void pri(int n){
    if (n == 0)
        printf("\n 0");
    else{
        //printf("\n %d", n);
        if(n%2==0){
          printf(x'"\n %d", n);
        }
        pri(n-1);

    }
}

void main(){

    int n;

    printf("insira o num");
    scanf("%d", &n);

    pri(n);
    //printf("\n soma: %d", pri(n, p));
}


