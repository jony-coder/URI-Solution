#include <stdio.h>
int main(){

    int N,temp;
    int sec,min,hour;
    scanf("%d", &N);

    hour = N/3600;
    temp = N%3600;
    min = temp/60;
    sec = temp%60;
    printf("%d:%d:%d\n", hour, min, sec);


return 0;
}
