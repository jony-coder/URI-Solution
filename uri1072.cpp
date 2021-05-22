#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,x;
    int in=0,out=0;

    cin>>n;

    for(int i=0; i<n; i++){

        cin>>x;

        if(x>=10 and x<=20){
            in++;
        }
        else{
            out++;
        }


    }
    printf("%d in\n", in);
    printf("%d out\n", out);






return 0;
}
