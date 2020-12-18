#include <stdio.h>
int main(){

    int N,Mul=0,i;
    scanf("%d", &N);

    if(N>2){

    for(i=1; i<=10; i++){

        Mul = i*N;
        printf("%d x %d = %d\n", i,N,Mul);

    }

    }
return 0;
}
