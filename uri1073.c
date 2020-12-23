#include <stdio.h>
int main(){


    int N;
    int i,sq;
    scanf("%d", &N);

    for(i=1; i<=N; i++){

        if(i%2==0){
            sq = i*i;
            printf("%d^2 = %d\n", i, sq);
        }

    }





return 0;
}
