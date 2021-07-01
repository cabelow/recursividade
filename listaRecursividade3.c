
#include <stdio.h>

void soma(int aux, int x, int *s){
    if (aux == x)
        return 0;
    else{
        *s += aux;
        aux++;
        soma(aux, x, s);
    }
}

void main(){

    int x, s;
    s=0;

    scanf("%d", &x);

    soma(1, x, &s);

    printf("\n soma: %d", s);
}

