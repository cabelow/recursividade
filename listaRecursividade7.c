
#include <stdio.h>

int soma(int n){
    if (n == 0)
        return n;
    else{
        return n + soma(n-1);

    }
}

void main(){

    int n, s;

    printf("insira o num");
    scanf("%d", &n);

    printf("\n soma: %d", soma(n));
}


