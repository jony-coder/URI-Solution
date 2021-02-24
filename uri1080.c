#include <stdio.h>
int main(){

    int i, max=0, count;
    int str[100];

    for(i=0; i<5; i++){
    scanf("%d", &str[i]);
    }

        max=str[0];
    for(i=0; i<5; i++){

        if(max<str[i]){
            max = str[i];
        }


    }
        for(i=0; i<5; i++){

        if(max==str[i]){
                count =i;
        }

    }

    printf("%d\n", max);
    printf("%d\n", count+1);



return 0;
}
