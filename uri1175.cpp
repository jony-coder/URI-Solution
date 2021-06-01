#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[20];
    for(int i=19; i>=0; i--){

        cin>>arr[i];
    }

    int arry_size = sizeof  (arr)/sizeof arr[0];

   for(int i=0; i<=19; i++){

        printf("N[%d] = %d\n", i, arr[i]);

   }

return 0;
}
