#include<stdio.h>

int mdc(int x, int y){
    if(y == 0) return x;
    else{
        return mdc(y,(x%y));
    }
}

void main(){
    int x,y;

    scanf("%d", &x);
    scanf("%d", &y);

    //r = mdc(x,y);

    printf("%d", mdc(x,y));
}
