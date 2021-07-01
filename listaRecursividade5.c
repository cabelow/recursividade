#include<stdio.h>

void trocar(int ini, int fim, float vet[]){
    float aux;
    aux = vet[ini];
    vet[ini] = vet[fim];
    vet[fim] = aux;
}

void camaninha(int ini, int fim, float vet[]){
    if(ini < fim){
        trocar(ini, fim, vet);
        camaninha(ini+1, fim-1, vet);
    }
}


void main(){
    int i;
    float vet[]={0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    int tamanho = sizeof(vet) / sizeof(float);
    int ini = 0;
    int fim = tamanho -1;
    //int parada = tamanho / 2;
    //parada --;



    for(i=0; i<tamanho; i++){
        printf(" %f -", vet[i]);
    }

    camaninha(ini, fim, vet);


    for(i=0; i<tamanho; i++){
        printf(" %f -", vet[i]);
    }
}
