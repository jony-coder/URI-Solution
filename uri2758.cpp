#include<bits/stdc++.h>
using namespace std;

int main(){

    float r1,r2;
    double d1,d2;

    cin>>r1>>r2;
    cin>>d1>>d2;

    printf("A = %f, B = %f\n", r1,r2);
    printf("C = %lf, D = %lf\n", d1,d2);

    printf("A = %.1f, B = %.1f\n", r1,r2);
    printf("C = %.1lf, D = %.1lf\n", d1,d2);

    printf("A = %.2f, B = %.2f\n", r1,r2);
    printf("C = %.2lf, D = %.2lf\n", d1,d2);

    printf("A = %.3f, B = %.3f\n", r1,r2);
    printf("C = %.3lf, D = %.3lf\n", d1,d2);

    printf("A = %.3E, B = %.3E\n", r1,r2);
    printf("C = %.3E, D = %.3E\n", d1,d2);

    printf("A = %.0f, B = %.0f\n", r1,r2);
    printf("C = %.0f, D = %.0f\n", d1,d2);


return 0;
}
