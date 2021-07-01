
#include <stdio.h>

int pote(int k, int n){
    //printf("\n passou");
    if (n == 0)
        return k;
    else{
        //printf("\n num; %d", k);
        return k * pote(k,n-1);

    }
}

void main(){

    int k, n;

    printf("\n insira o num k");
    scanf("%d", &k);

    printf("\n insira o num n");
    scanf("%d", &n);

    printf("\n soma: %d", pote(k,n-1));
}

