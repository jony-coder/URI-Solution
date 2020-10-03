#include <stdio.h>
int main(){
    int a,b,s,greatest;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &s);
    int bracket = (a-b);
    int mul = a*b*s;
    int plus = a+b;
    int secondBracket = (plus+mul*bracket)/2;

    //greatest = (a+b+abs(a-b))/2;


    printf("%d eh o maior", secondBracket);

    return 0;

}
