#include <stdio.h>
int main(){

    int N,i,number;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &number);
        if(number%2==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }


    }

return 0;
}

