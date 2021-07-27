#include<bits/stdc++.h>
using namespace std;

int main(){


    while(1){
        int x;
        cin>>x;
        if(x==0){
            break;
        }
        else{

            for(int i=1; i<x; i++){
                printf("%d ", i);
            }
            printf("%d\n", x);


        }

    }


return 0;
}
