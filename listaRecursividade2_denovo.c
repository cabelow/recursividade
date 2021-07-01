#include<stdio.h>

int soma(int *pv, int tamanho){
    //printf("\n passou pela funcao");
    if(tamanho == 0) {
        //printf("\n tamanho %d", tamanho);
        printf("\n pegou o ultimo do vetor %d", *pv);
        //printf("\n ponteiro %p", pv);
        return *pv;
    }
    else{
        //printf("\n .%d", *pv);
        //printf("\n tamanho %d", tamanho);
        printf("\n pegou um valor do vetor %d", *pv);
        //printf("\n ponteiro %p", pv);
        return *pv + soma(pv+1, tamanho-1);
    }
}

void main(){
    int v[] = {2,5,3,7};
    int *pv;

    pv = &v[0];
    //printf("%d", *pv);

    int tamanho = sizeof(v) / sizeof(int);
    //printf("\n tamanho na main = %d", tamanho);

    tamanho -= 1;
    int retorno = soma(pv, tamanho);
    printf("\n resultado: %d", retorno);
    //printf("\n resutado : %d", soma(pv, tamanho));
}
