#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    int T;
    cin>>T;

    for(int i=0; i<T; i++){
            int counter = 0;
            cin>>n;

    if(n<0){
        printf("%d nao eh primo\n", n);

    }

    else{

    for(int i=1; i<n; i++){

        if(n%i==0){
            counter++;
        }

    }

    if(counter>1){
        printf("%d nao eh primo\n", n);
    }
    else{
        printf("%d eh primo\n", n);
    }
    }
    }



return 0;
}
