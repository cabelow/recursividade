#include <stdio.h>

void pri(int n, int *p){
    if (*p == n)
        printf("\n %d", *p);
    else{
        printf("\n %d", *p);
        (*p)++;
        pri(n,p);

    }
}

void main(){

    int n, num;

    printf("insira o num");
    scanf("%d", &n);

    num = 0;
    int *p;
    p = &num;

    pri(n, p);
    //printf("\n soma: %d", pri(n, p));
}

