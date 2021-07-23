#include<bits/stdc++.h>
using namespace std;
int main(){

    int N;
    int k; cin>>k;

    if(k==1){
        printf("Top %d\n", k);
    }
    else if(k>1 && k<=3){
            N=3;
        printf("Top %d\n", N);
    }

    else if(k>3 && k<=5){
        N=5;
        printf("Top %d\n", N);
    }
    else if(k>5 && k<=10){
        N=10;
        printf("Top %d\n", N);
    }

    else if(k>10 && k<=25){
        N=25;
        printf("Top %d\n", N);
    }
    else if(k>25 && k<=50){
        N=50;
        printf("Top %d\n", N);
    }
    else if(k>50 && k<=100){
        N=100;
        printf("Top %d\n", N);
    }


return 0;
}
