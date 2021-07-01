

#include <stdio.h>

int Multip_Rec(int n1, int n2){
    //printf("\n passou");
    if (n1 == 1)
        return n2;
    else{
        //printf("\n num; %d", k);
        return n2 + Multip_Rec(n1-1,n2);

    }
}

void main(){

    int n1, n2;

    printf("\n insira o num n1: ");
    scanf("%d", &n1);

    printf("\n insira o num n2: ");
    scanf("%d", &n2);

    printf("\n soma: %d", Multip_Rec(n1,n2));
}

