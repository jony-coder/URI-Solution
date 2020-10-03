#include <stdio.h>
int main(){

    int time,speed;
    float result;
    scanf("%d", &time);
    scanf("%d", &speed);
    result = (time*speed)/12.00;

    printf("%.3f\n", result);



return 0;
}
