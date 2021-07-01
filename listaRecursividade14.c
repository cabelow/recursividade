#include<stdio.h>

int fat(int n){
    if(n==1) return 1;
    else {
        if (n%2 == 1) return n * fat(n-1);
        else return fat(n-1);
    }
}

void main(){
    int n;

    scanf("%d", &n);
    printf("\n fat = %d", fat(n));
}
