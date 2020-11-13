#include <stdio.h>
int main(){

    int N,i,number;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &number);

    }
if(number==0){
            printf("NULL\n");
        }
        else if(number%2==0 && number>0){
            printf("EVEN POSITIVE\n");
        }
        else if(number%2!=0&&number>0){
            printf("ODD POSITIVE\n");
        }
        else if(number%2==0&&number<0){
            printf("EVEN NEGATIVE\n");
        }
        else if(number%2!=0&&number<0){
            printf("ODD NEGATIVE\n");
        }





return 0;
}
