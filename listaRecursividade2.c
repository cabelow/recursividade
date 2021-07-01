
#include <stdio.h>

void soma(int *pv, int *x){
    if (*pv == 0)
        return 0;
    else{
        //printf("\n %d", x);
        printf("\n . %d", *pv);
        *x += *pv;
        pv++;
        //printf("\n %p", pv);

        soma(pv, x);
    }

}

void main(){

    int x=0;
    //int soma;
    int v[5]={5,4,5,6,3};



    soma(&v[0], &x);
}

