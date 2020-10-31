#include <stdio.h>
int main(){

    double n1,n2,n3,n4,n5;
    double sumTwo;
    double sum, wieght, avg;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);

     wieght = (n1*2.0)+(n2*3.0)+(n3*4.0)+(n4*1.0);
     avg = wieght/10.0;
     printf("Media: %.1lf\n", avg);

    if(avg>=7.0){
            printf("Aluno aprovado.\n");

    }
    else if(avg<5.0){
            printf("Aluno reprovado.\n");
    }

      else if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf", &n5);
       printf("Nota do exame: %.1lf\n", n5);

       sumTwo = (avg+n5)/2;

       if(sumTwo>=5.0){
        printf("Aluno aprovado.\n");
       }
       else if(sumTwo<=4.9){
        printf("Aluno reprovado.\n");
       }
       printf("Media final: %.1lf\n", sumTwo);



    }





return 0;
}
