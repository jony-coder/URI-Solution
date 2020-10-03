#include <stdio.h>
#define PI 3.14159
int main(){

    int R;
    double Volume;
    scanf("%d", &R);

    Volume = 4/3.0*PI*R*R*R;
    printf("VOLUME = %.3lf\n", Volume);


return 0;
}
