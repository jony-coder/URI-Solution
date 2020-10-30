#include <stdio.h>
int main(){

    float n1,n2,n3,n4,n5;
    float sumTwo=0.0;
    float sum=0.0, wieght=0.0, avg = 0.0;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);

     wieght = (n1*2.0)+(n2*3.0)+(n3*4.0)+(n4*1.0);
     avg = wieght/10.0;
     printf("Media: %.1f\n", avg);

    if(avg>=7.0){
            printf("Aluno aprovado.\n");

    }
    else if(avg<5.0){
            printf("Aluno reprovado.\n");
    }

      else if(avg>=5.0 && avg<=6.9){
        printf("Aluno em exame.\n");

       printf("Nota do exame: ");
       scanf("%f", &n5);
       sumTwo = (avg+n5)/2;

       if(sumTwo>=5.0){
        printf("Aluno aprovado.\n");
       }
       else if(sumTwo<=4.9){
        printf("Aluno reprovado.\n");
       }
       printf("Media final: %.1f\n", sumTwo);



    }





return 0;
}
