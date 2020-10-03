#include <stdio.h>
int main(){

    int a,b,c,smallest, second, one, two, three;
    scanf("%d%d%d", &a, &b, &c);
       one = a;
       two =b;
       three=c;
    if(a<b&&a<c){
        smallest = a;
        printf("%d\n",a);

    }

   else if(b<c&&b<a){
        smallest = b;
        printf("%d\n", b);
    }
   else if(c<a&&c<b){
        smallest = c;
        printf("%d\n", c);
    }

    if(smallest == a){
    if(b<c){
        printf("%d\n", b);
    }
    else{
        printf("%d\n", c);
    }
}

 if(smallest == b){
    if(a<c){
            second = a;
        printf("%d\n", a);
    }
    else{
        second = c;
        printf("%d\n", c);
    }
 }
 if(smallest == c){
    if(a<b){
            second=a;
        printf("%d\n", a);
    }
    else{
        second=b;
        printf("%d\n", b);
    }
 }

 if(a>b&&a>c){

        printf("%d\n",a);

    }

   else if(b>c&&b>a){

        printf("%d\n", b);
    }
   else if(c>a&&c>b){

        printf("%d\n", c);
    }


        printf("\n%d\n%d\n%d\n", one, two, three);



return 0;
}
