#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[11];

    for(int i=0; i<10; i++){

        cin>>arr[i];
        if(arr[i]<=0){
            arr[i]=1;
        }
    }

    for(int i=0; i<10; i++){

        printf("X[%d] = %d\n", i,  arr[i]);
    }

return 0;
}
