#include <stdio.h>
int main(){

    int N, counter=0, i;
    scanf("%d", &N);

    for(i=3; i<=N; i++){
        counter++;
    }

    printf("%d\n", counter);

return 0;
}
