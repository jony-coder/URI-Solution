#include <stdio.h>

int main(){

    int N,i;
    float a,b,c,wv;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        for(i=0; i<N; i++){
        scanf("%f%f%f", &a, &b, &c);
        wv = ((a*2)+(b*3)+(c*5))/10;
        printf("%.1f\n", wv);
        }

    }





return 0;
}
